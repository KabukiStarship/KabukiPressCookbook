# [2] Seam Trees

```
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

Seam Tree Testing is a unit testing and mocking methodology for C/C++ and languages that support conditional compilation where seams are enumerated 1-N, where N is the number of seams, and a tree of seams is created with related seams grouped in nodes and leaves contain groups of tests.

#### 2.1 Rules Against Seam Gerrymandering

Seam Gerrymandering is, as the name implies, very similar to political district Gerrymandering, only it is when a seam covers regions that are representative of the seam district. Seams should not be Gerrymandered in such a way to the seam is falsely represented and should have a proper demo apps. Instead, modules should be decomposed into a tree structure, assigned permanent Seam Tree Node Index, and Scrums collapsed into SPRINT(s) upon release. The purpose of this system is to avoid sweeping dirt around on the forest floor and instead sweep the dirt out of the scrums.

### [2.2] Seam Tree Macros

Script2 software uses a replacement for the standard library that rapidly compiles and does not require use of precompiled libraries. The Script2 convention however does use the Microsoft standard `pch.h` to `#include <cstdint>`, `#include <cstdarg>`, and to define some compiler-specific stuff and the macros using the `<script2/config.h>` file. Script2 software provides the precompiled header file in the $(ProjectDir)\ file.

```C++

```

In order to use the macros, KT uses some macros for printing debug information to the console using C++ variadic macros.

```C++

```

When you see PRINTF or PRINT in all caps, this means this is debug information for this specific seam. In order for this system to work, if there are dependencies, they must be included **BEFORE** the `#if SEAM == _0_1_2__34` section. The reason for this becomes evident when the order is reversed because the macros will get defined multiple times and you'll end up printing debug info from other seams.

## [2.17] Static Test Functions and Functions

In C, a static function is only visible inside of that translation unit. Script2 software is designed for rapid compilation and execution. Usage of static functions outside of classes shall be reserved for unit tests and cache optimization in order to duplicate the function inside multiple translation units to optimized for locality of reference. In other words, don't use static just to be lazy, put it in the implementation file.

## [2.8] Global and Module Configuration

Each source code module contains a `config.h`, the config file, and `global.h`, the global file it the `$ModuleRoot`. There is no `config.h` file for the primary SDK because the assembly is configured in the `pch.h` file. Instead implementations designate the first include module as the SDK core.

The `global.h` file contains `#include` references for all of the module's public facing API the entire module may be imported by importing the `global.h` file. The `config.h` file contains all of the modules dependencies and configuration information. In the target program there is a `assembly.h` file that gets `#include` inline from each module's `config.h` file and is used to configure the compiled assembly.

## [2.9] Build-time Optimizations

In C++ there are some language features that are very powerful, but slow down the compiler a lot. Script2 Build-time optimizations are the 3-file Translation Unit with unique Translation Unit names.

### [2.9.a] Unique Translation Unit Names

This rule straddles the line between framework and stylesheet, but leans towards the framework because it affects the way the system builds.

C++ compilers support partial classes; meaning that you can split up an object's implementation into multiple files, which is useful for splitting up work on classes between multiple developers so it's cleaner to merge the branches.

For each implementation file compiled, the compiler generates a translation unit (TU or TUs) which then get linked together during the link stage. This TU is given the file's name. The compiler will use a hash table of TUs to check if the implementation was split between multiple TUs and if there are multiple translation units with the same name the compiler must check which TU to add the code to. Hash table collisions are very time consuming to resolve leading to longer build time. For this reason implementation files should have unique filenames in order to reduce unneeded hash table collision resolutions.

Script2 Compliant software have unique implementation filenames named after the namespace name in modulename_translation format, where all modulename(s) are unique.

#### Example

```C++
namespace Foo {
namespace Bar {
  struct Go;
};  //<
}   //< namespace Bar
}   //< namespace Foo
```
##### Output

Filename is `foo_bar_go.cc`.

## [2.10] Usage of Precompiled header

There is no pre-compiled header needed for Script2 because it compiles so fast.

## [2.11] Usage of Asserts

Usage of assert statements in Script2 can be used for only the development phase as a form of training wheels, and when the wheels are taken off, you should be able to ride the bike without falling, or the training wheels can stay on. One major benifit of using Script2 ASSERT, AVOW,

Occasionally there will be an environmental hazard when you're riding that causes you to fall off the bike, such as ice or a bad curve. You can have to options, you can either ride with training wheels your entire life, slowing you down, or you can put up with the occasional fall by riding without the them and not be slowed down. This depends on the application. Some applications require minimized ROM footprint. In these circumstances, you may want to make assert statements only during debug phase and run without the training wheels because it doesn't matter if it messes up in operation because of another recover mechanism; or you don't care if you ride with the training wheels on because you're not going fast and you just need to never fall down. That is the design of the assert system in KT. The key edge case to keep in mind is the bit flip, which will be the most common non-critical bug; if the system is crashing for anything other than a bit flip then you have other problems. The chance of a bit flip is very low, but the chance of a bit flip causing a null pointer substantially lower, only N/(2^N), where N is the number of bits in a word. Null pointers an excellent example of training wheels that can generally be taken off after the system is working.

## [2.12] C ABI

A *C Application Binary Interface* (*ABI*) helps with the creation of cross-language bindings and dramatic reduction of compile time. KT uses a modern system of concealing library template implementations behind a C ABI with explicit data types, and using modern C++1x wrappers. KT does not at this time provide a C99 interface but future versions will. The C ABI can be found in the `public.h` files.

## [2.13] Framework for C++ Templates

This rule is different than the style guide for templates because the style guide dictates how the code will be formatted, but the rules in this section dictates the structure of how the templates are programmed.

C++ Templates can not be precompiled into header files and may create duplicate copies of static data in the library assembly and the executable assembly. The only way to get around this is to not put templates the precompiled library header files. Script2 Compliant Software may use templates, but provide a header file without templates that contains wrapper functions for instances of specialized templates.

## [2.14] Integer Not-a-Numbers

Script2 handles numbers as is specified in the SCRIPT specification, which can be found at:

[https://github.com/kabuki-starship/script/blob/master/script_specification_rfc.md#22-integers](https://github.com/kabuki-starship/script/blob/master/script_specification_rfc.md#22-integers)

### [2.14.a] Not-a-number

Script2 uses the highest possible unsigned integer, `0b'1...1`, and the lowest possible signed number, `0b'10...0`, to represent not-a-number (*NaN*).

### [2.14.b] Upper and Lower bounds

The default upper and lower bounds is dictate by the most significant bit that isn't the sign bit. For unsigned numbers this is bit (n-1) and for signed numbers this is (n-2), when n is the number of bits.

## [2.15] Year 2038 Epoch Handling

Script2 software is handles the Year 2038 time epoch, the year when 32-bit signed integer timestamps cycle max out. One property to be aware of about signed versus unsigned handling of numbers is that unsigned numbers are designed to cycle from the max value, 2^n-1, where n is the number of bits, back to 0. With signed numbers this is not the case.

## [2.16] Template Hiding and Pre-Hungarian Notation

In order to hide some templates, it is required to use post-Hungarian notation. Script2 uses the ASCII Data Types for Hungarian notation (**@see** SCRIPT Specification).

```C++
template<Typename T>
T GetSomething () { return 0; }

// Public interface
uint8_t GetSomethingUI1 () { return 0; }
float GetSomethingFLT () { return 0.0f; }
```

## [2.18] Static Arrays

Static arrays in Script2 are handled using wrapper functions that hide the static data from the headers that get compiled into each translation unit. Whenever the size of the array is used in the software, the wrapper function shall return a pointer to the array and the reference to the size variable passed in as a parameter.

***Example***

```C++
// In header:
const int* Foo (int& bar);

// In implementation:
const int* Foo (int& bar) {
  static const kFooBar[] = { 1, 2, 3 };
  bar = 3;
  return kFooBar;
}
```

## License

Copyright 2014-2018 (C) [Cale McCollough](https://calemccollough.github.io). All rights reserved (R).

This is a free and open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, trade secrets, art, and other content contained this file, folder and engineering-invention-startups GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository or by email to Cale McCollough at [calemccollough@gmail.com](mailto:calemccollough@gmail.com) to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
