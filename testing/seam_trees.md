# [Kabuki Toolkit Cookbook](../readme.md)

## [Unit Testing](./readme.md)

### [Seam Trees](./readme.md)

```AsciiArt
  ██████ ▓█████ ▄▄▄       ███▄ ▄███▓   ▄▄▄█████▓ ██▀███  ▓█████ ▓█████   ██████
▒██    ▒ ▓█   ▀▒████▄    ▓██▒▀█▀ ██▒   ▓  ██▒ ▓▒▓██ ▒ ██▒▓█   ▀ ▓█   ▀ ▒██    ▒
░ ▓██▄   ▒███  ▒██  ▀█▄  ▓██    ▓██░   ▒ ▓██░ ▒░▓██ ░▄█ ▒▒███   ▒███   ░ ▓██▄   
  ▒   ██▒▒▓█  ▄░██▄▄▄▄██ ▒██    ▒██    ░ ▓██▓ ░ ▒██▀▀█▄  ▒▓█  ▄ ▒▓█  ▄   ▒   ██▒
▒██████▒▒░▒████▒▓█   ▓██▒▒██▒   ░██▒     ▒██▒ ░ ░██▓ ▒██▒░▒████▒░▒████▒▒██████▒▒
▒ ▒▓▒ ▒ ░░░ ▒░ ░▒▒   ▓▒█░░ ▒░   ░  ░     ▒ ░░   ░ ▒▓ ░▒▓░░░ ▒░ ░░░ ▒░ ░▒ ▒▓▒ ▒ ░
░ ░▒  ░ ░ ░ ░  ░ ▒   ▒▒ ░░  ░      ░       ░      ░▒ ░ ▒░ ░ ░  ░ ░ ░  ░░ ░▒  ░ ░
░  ░  ░     ░    ░   ▒   ░      ░        ░        ░░   ░    ░      ░   ░  ░  ░
      ░     ░  ░     ░  ░       ░                  ░        ░  ░   ░  ░      ░
```

Seam Tree Testing is an in-order unit testing and mocking methodology where software is decomposed into seams enumerated 1-N, where N is the number of seams, and where a tree of test seams is created. Seam trees are useful in languages like C++ that support conditional compilation because the seams are enumerated and it allows developers to block out all of the code above a seam so you can focus on only one seam at a time. It also allows objects to be mocked before certain seams and to bring the production code up and running in stages.

A seam, as the name implies, is similar to a seam in clothing where pieces of cloth join, but we should be able to switch out any piece of cloth that is the same shape to replace a piece of cloth. In the context of software, the test should have some fixed inputs and outputs and expected outputs and we should be able to switch the code out with other code and it will be functionally identical.

#### Seam Tree Headers

Script2 compiles rapidly and does not require use of precompiled libraries, but we still use the Microsoft standard `pch.h`. At the top of the precompiled header there is an include for th `pch_header.h` file, `.inl` meaning inline header file. Inline headers are used when you expect to define macros and then include a file below said macros where you are essentially passing the macros in like function parameters. For example, in the `.pch` file below the `pch_header.h` file is included at the top, some macros are configured such as `#define USING_UTF32 YES`, and then below that we `#include "pch_footer.inl"`, and the `USING_UTF32` then gets used in the `pch_footer.inl` to configure the default Unicode format. For a full list of th macros you can override, just look in `pch_footer.inl`.

In C++ the default behavior is for a macro that does not exist to be lazily evaluated as 0 and in Script2 the value of `YES` is 0, so any non-defined macro when compared `== YES` will evaluate as true. This design allows the behavior to be on be default and you turn them off in the `pch.h` file; similarly the `CPU_64_BIT` and `CPU_WORD_SIZE` macros are both 0 so everything is configured for a 64-bit CPU by default.

***`pch.h`***

```C++
#pragma once

#ifndef PRECOMPILED_HEADER
#define PRECOMPILED_HEADER 1
#include "pch_header.h"

#define SEAM SEAM_SCRIPT2_TABLE

#define CPU_WORD_SIZE CPU_64_BIT
#define CPU_ENDIAN LITTLE_ENDIAN

#define USING_CONSOLE YES

#define USING_STR UTF8

#define USING_UTF8 YES
#define USING_UTF16 YES
#define USING_UTF32 YES

#define USING_FP4 YES
#define USING_FP8 YES

#include "pch_footer.inl"

#endif
```

##### Module Seam Macros

The `module_seams.inl` file is where the seams get enumerated. These Macros get enumerated  The goal of creating Seam macros with human-readable names is that we want to be able to rearrange the order of and insert unit tests without having to rename macro indexes.

***`module_seams.inl`***

```C++
#ifndef SCRIPT2_MODULE_SEAMS
#define SCRIPT2_MODULE_SEAMS

#define SCRIPT2_UNIPRINTER 0
#define SCRIPT2_RNG 1
#define SCRIPT2_ITOS 2
#define SCRIPT2_FTOS 3
#define SCRIPT2_SPRINTER 4
#define SCRIPT2_CLOCK 5
#define SCRIPT2_STACK 6
#define SCRIPT2_MATRIX 7
#define SCRIPT2_STRAND 8
#define SCRIPT2_LOOM 9
#define SCRIPT2_LIST 10
#define SCRIPT2_BOOK 11
#define SCRIPT2_MAP 12
#define SCRIPT2_TABLE 13
#define SCRIPT2_DICTIONARY 14
#define SCRIPT2_EXPR 15
#define SCRIPT2_DOOR 16
#define SCRIPT2_ROOM 17
#define SEAM_N 18

#endif
```

When we want to switch seams, now all we have to do `#define SEAM` to the seam we want, for example `#define SEAM SEAM_SCRIPT2_ROOM`. When you design your Seam tree macros, you might want to make them easier to popup with autocomplete or Intellisense.

#### Global and Module Configuration

Each source code module contains a `config.h`, the config file, and `global.h`, the global file it the `$ModuleRoot`. There is no `config.h` file for the primary SDK because the assembly is configured in the `pch.h` file. Instead implementations designate the first include module as the SDK core.

The `global.h` file contains `#include` references for all of the module's public facing API the entire module may be imported by importing the `global.h` file. The `config.h` file contains all of the modules dependencies and configuration information. In the target program there is a `assembly.h` file that gets `#include` inline from each module's `config.h` file and is used to configure the compiled assembly.

#### Build-time Optimizations

In C++ there are some language features that are very powerful, but slow down the compiler a lot. Script2 Build-time optimizations are the 3-file Translation Unit with unique Translation Unit names.

##### Unique Translation Unit Names

This rule straddles the line between framework and stylesheet, but leans towards the framework because it affects the way the system builds.

C++ compilers support partial classes; meaning that you can split up an object's implementation into multiple files, which is useful for splitting up work on classes between multiple developers so it's cleaner to merge the branches.

For each implementation file compiled, the compiler generates a translation unit (TU or TUs) which then get linked together during the link stage. This TU is given the file's name. The compiler will use a hash table of TUs to check if the implementation was split between multiple TUs and if there are multiple translation units with the same name the compiler must check which TU to add the code to. Hash table collisions are very time consuming to resolve leading to longer build time. For this reason implementation files should have unique filenames in order to reduce unneeded hash table collision resolutions.

Script2 Compliant software have unique implementation filenames named after the namespace name in modulename_translation format, where all modulename(s) are unique.

***Example `c_foo.h`***

```C++
namespace foo {
namespace bar {
  struct Go;
};  //<
}   //< namespace Bar
}   //< namespace Foo
```

***Output***

Filename is `foo_bar_go.cc`.

#### Usage of Asserts

Usage of assert statements in Script2 can be used for only the development phase as a form of training wheels, and when the wheels are taken off, you should be able to ride the bike without falling, or the training wheels can stay on. One major benefit of using Script2 ASSERT, AVOW,

Occasionally there will be an environmental hazard when you're riding that causes you to fall off the bike, such as ice or a bad curve. You can have to options, you can either ride with training wheels your entire life, slowing you down, or you can put up with the occasional fall by riding without the them and not be slowed down. This depends on the application. Some applications require minimized ROM footprint. In these circumstances, you may want to make assert statements only during debug phase and run without the training wheels because it doesn't matter if it messes up in operation because of another recover mechanism; or you don't care if you ride with the training wheels on because you're not going fast and you just need to never fall down. That is the design of the assert system in KT. The key edge case to keep in mind is the bit flip, which will be the most common non-critical bug; if the system is crashing for anything other than a bit flip then you have other problems. The chance of a bit flip is very low, but the chance of a bit flip causing a null pointer substantially lower, only N/(2^N), where N is the number of bits in a word. Null pointers an excellent example of training wheels that can generally be taken off after the system is working.

#### C-ABI

A *C Application Binary Interface* (*CABI* or *Cabi*) helps with the creation of cross-language bindings and dramatic reduction of compile time. KT uses a modern system of concealing library template implementations behind a C ABI with explicit data types, and using modern C++1x wrappers. KT does not at this time provide a C99 interface but future versions will. The C ABI can be found in the `public.h` files.

#### Framework for C++ Templates

This rule is different than the style guide for templates because the style guide dictates how the code will be formatted, but the rules in this section dictates the structure of how the templates are programmed.

C++ Templates can not be precompiled into header files and may create duplicate copies of static data in the library assembly and the executable assembly. The only way to get around this is to not put templates the precompiled library header files. Script2 Compliant Software may use templates, but provide a header file without templates that contains wrapper functions for instances of specialized templates.

#### Integer Not-a-Numbers

Script2 handles numbers as is specified in the SCRIPT specification, which can be found at:

[https://github.com/kabuki-starship/script/blob/master/script_specification_rfc.md#22-integers](https://github.com/kabuki-starship/script/blob/master/script_specification_rfc.md#22-integers)

##### Not-a-number

Script2 uses the highest possible unsigned integer, `0b'1...1`, and the lowest possible signed number, `0b'10...0`, to represent not-a-number (*NaN*).

##### Upper and Lower bounds

The default upper and lower bounds is dictate by the most significant bit that isn't the sign bit. For unsigned numbers this is bit (n-1) and for signed numbers this is (n-2), when n is the number of bits.

#### Year 2038 Epoch Handling

Script2 software is handles the Year 2038 time epoch, the year when 32-bit signed integer timestamps cycle max out. One property to be aware of about signed versus unsigned handling of numbers is that unsigned numbers are designed to cycle from the max value, 2^n-1, where n is the number of bits, back to 0. With signed numbers this is not the case.

#### Template Hiding and Pre-Hungarian Notation

In order to hide some templates, it is required to use post-Hungarian notation. Script2 uses the ASCII Data Types for Hungarian notation (**@see** SCRIPT Specification).

```C++
template<Typename T>
T GetSomething () { return 0; }

// Public interface
UI1 GetSomethingUI1 () { return 0; }
FP4 GetSomethingFP4 () { return 0.0f; }
```

### Seam Gerrymandering

In general, each seam increment should only work on one class unless that class is coupled to or married with functionality with another class. Even if it's a simple class, the problem with C++ is that sometimes it blows up on you, and you need to figure out exactly which class there is a missing semicolon, period, or bracket. Another benefit of this design pattern is that when you first start making seam tree tests it's easiest to just make one seam per class anyways becaus it minimizes the thought required to chop of the seams.

Seam Gerrymandering is, as the name implies, very similar to political district Gerrymandering, only it is when a seam covers regions that are representative of the seam coverage. Seams should not be Gerrymandered in such a way to the seam is falsely represented. The goal is that when there is a bug discovered code or you want to add, change, or remove functionality, you want to block out all of the other debug code and just see and focus on the debug code for the object you're working on.

Your primary inspiration to not Gerrymander seams is that you want to get your commit count as high as possible as quickly as possible so it's best to make small scrums and to keep a moderate backflow of very small tasks to do when you have some extra time.

**[<< Previous Section:Overview](./readme.md) | [Next Section:Mocking >>](./mocking.md)**

## License

Copyright 2018-9 (C) [Cale McCollough](https://calemccollough.github.io); all rights reserved (R).

This is an open-source document, the Document, that was written by and contains intellectual property. The Document consists of documents, files, source code, technology design files, art, and other content contained this file, folder and markdown.cookbook GitHub repository located at <https://github.com/kabuki-starship/kabuki.toolkit.cookbook>, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository as an Issue ticket to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Your Name. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
