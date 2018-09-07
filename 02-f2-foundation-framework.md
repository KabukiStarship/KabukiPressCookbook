# 2 F2 Foundational Framework

```
   _  _  _  _  _    _  _  _        
  (_)(_)(_)(_)(_)_ (_)(_)(_) _     
  (_)           (_)         (_)       __      
  (_) _  _                _ (_)     [|-oundational
  (_)(_)(_)            _ (_)       
  (_)               _ (_)                __           
  (_)            _ (_) _  _  _         [|-ramework   
  (_)           (_)(_)(_)(_)(_)    
```

The F2 Foundational Framework, or F2 for short, is a Modern-C++1x Page-Major-Minor Seam (PMMS) Unit Testing Framework and nanoframework for creating microframeworks and benchmarking software. F2 provides:

* Modified Google C++ Style Guide.
* Sophisticated Page-Major-Minor Seam unit testing framework.
* Rapid compiling library format with clean separation of `public.h` and `global.h` interfaces.
* Fastest number printing and scanning algorithms and associated algorithms.
* Useful minimized set of console IO functions for concise debug macros.

## 2.1 F2 C++ Style Guide

The F2 C++ Style Guide is a modified version of the Google C++ Guide. :

[https://google.github.io/styleguide/cppguide.html](https://google.github.io/styleguide/cppguide.html)

## 2.2 Almost-UML-Compliant

Almost-UML-compliant means that the core of the proprietary software is UML compliant with the exceptions of allowed use of Hungarian Notation UML Templates and the CFacade, and third-party libraries may not be UML-compliant but are mapped in an Almost-UML-compliant object wrapper.

## 2.3 Hungarian Notation UML Templates

Hungarian notation is a naming convention in which the name of the class implies what data type is used to store the data. Post Hungarian Notation places the class name before the type name(s); for example `FooInt32 ()` implies that the function foo returns an `int32_t` type. Pre-Hungarian Notation places the type name before the class name; for example `Int32Foo ()`. The default endianness of Hungarian notation is Post-Hungarian notation.

F2 Software supports the use of Hungarian Notation to incorporate templated objects into Compliant UML Models. F2 software reserves the symbols UI, SI, and I for n-bit unsigned integer, signed integer, and either signed or unsigned integer, and T for a generic type. F2 software refers to all other data types as ASCII Data Types if an ASCII Data Type exists for that type.

```C++
// Class Foo_UI_SI_I with function Foo_SI2 translates to the following C++ class:

template<typename UI, typename SI, typename I>
struct Foo {
    UI one;
    SI two;
    I  three;

    Foo (UI one, SI two, I three) :
        one   (one  ),
        two   (two  ),
        three (three) {
    }

    template<typename Char>
    const Char* Bar () {
      static const Char kString[] = { 'A', 'S', 'C', 'I', 'I', '\0' };
      return kString;
    }
};

std::cout << Foo<uint32_t, int32_t, int16_t> (1, 2, 3).Bar<char> ();
```

## 2.4 CFacade

C is not UML compliant because it is not object oriented. F2 incorporates C into UML using CFacade(s). What this means is that the c module tag is used as an object in a UML model. In the code base there is no CFacade object, it's just a graphical representation for use in UML diagrams to better support cross-platform and cross-language programming.

## 2.5 The Assembly Line Boundary

An assembly in Assembly programming and C/C++ is a set of source code compiled into a single contiguous block of executable code using the C or similar calling convention. There are only two primary types of assemblies, precompiled libraries and executable files. The rule in C++ for libraries and DLLs is that a precompiled library may not include any other precompiled libraries, but a executable file may incorporate multiple precompiled libraries. This is because of the way that C++ does name mangling and setups up the static memory.

## 2.6 Page, Major and Minor Seams

The Page-Major-Minor Seam Enumeration System is based upon a standard 8.5" by 11" sized sheet of paper with enough room for margins, a header, a paragraph, and a footer to allow for clean printing into Engineered Software Analysis and Software System Definitions either vertically or horizontally. Enumerated seams allow developers to peal back the layers of the code to the core so you can debug that seam in isolation with debug information that is customized for that seam.

Page and Major seams numbers are contiguous integers either in the range [0,9] or [00,99] enumerated in the order they are to be tested. If the index is range [0,9] the seam number will be a 2 digit number. If the index is range [00,99] the seam number will be a 4 digit number.  Most software will fit neatly in a single page with less than 11 pages and 11 major seams, but  minor seams may number in the hundreds. For this reason the minor seam is combined with the 2 or 4 digit Page-Major Seams Number. For example SEAM_12_345 is Page number 1 (the second page), Major Seam 2 (the third major seam.), and Minor seam 345 (the 346th minor seam.).

The smallest seam increment is the Minor Seam. A Minor Seam is defined as a group of one or more files that are decoupled from the minor seam above them, and those files have debug information specific to that minor seam.

The second largest seam increment is the Major Seam. A Major Seam is defined as a group of two or more Minor Seams that have one or more executable projects associated with them.

Namespaces and modules may be spread out across multiple seams. For instance, work on an module may start in SEAM_01_0 and SEAM_1 may have a working functioning executable program. On SEAM_02 the object then goes through one or more development iterations.

The largest seam increment currently defined by F2 is a Page Seam. A Page Seam is defined as a group of two or more major seams that fit neatly on single 8.5" by 11" sheet of paper; hence the name Page Seam.

Modules may appear on multiple seams and pages. For example, part of a module may be introduced in SEAM_01 and that module may also be developed upon in SEAM_02, then not developed upon in SEAM_03, but again developed upon in SEAM_04. When a previous seam has been changed, it may regress the Progress Seam number. The Project Progress Seam Number is the seam number is the highest seam number that has passed all of the unit tests.

Implementations that cannot fit their software on a single page of paper first must  perform a sanity check and determine if the design could be simplified and may set the size of their engineered software analysis to some paper size larger than 8.5" x 11" but must shrink the page to 8.5" x 11" and provide an online link to the full-sized Page-Seam Diagram.

#### Rules Against Seam Gerrymandering

Seam Gerrymandering is, as the name implies, very similar to political district Gerrymandering, only it is when a seam covers regions that are representative of the seam district. Seams should not be Gerrymandered in such a way to the seam is falsely represented.

### 2.7 Precompiled Header and Seams Header

F2 software uses a replacement for the standard library that rapidly compiles and does not require use of precompiled libraries. The F2 convention however does use the Microsoft standard `stdafx.h` to include `cstdint` and to define the PMMS macros , but a filename is not a framework so the name does not matter but the default is `stdafx.h`. F2 software provides the precompiled header file in the $ProjectDirectory/source file.

```C++
// Barebones stdafx.h header
#pragma once

#include <cstdarg>
#include <cstdint>

typedef unsigned int uint;

#define API

#define SEAM_PAGE 0
#define SEAM_MAJOR 0
#define SEAM_MINOR 0

#define SEAM_0_0_0 1
#define SEAM_0_0_1 2
#define SEAM_0_0_2 3
#define SEAM_COUNT 3

#define WORD_SIZE 64

#define APP_EXIT_SUCCESS 0
#define APP_EXIT_FAILURE 1

#ifndef INCLUDED_SEAMS
#define INCLUDED_SEAMS

#if SEAM_PAGE == 0
#if SEAM_MAJOR == 0 //< SEAM_MAJOR 0 is reserved for the SDK.
#if SEAM_MINOR == 0
#define SEAM_0_0_0
#define SEAM 1
#elif SEAM_MINOR == 1
#define SEAM_0_0_1
#define SEAM 2
#elif SEAM_MINOR == 2
#define SEAM_0_0_2
#define SEAM 3
#endif
#endif  //< #if SEAM_MAJOR == 0
#endif  //< #if SEAM_PAGE == 0

#if SEAM > 0 && SEAM <= SEAM_COUNT
#define DEBUG 1
#endif

#endif  //< #if INCLUDED_SEAMS

#if COMPILER == VISUAL_CPP
#define FORMAT_SI8 "%I64i"
#define FORMAT_UI8 "%I64u"
#else
#define FORMAT_SI8 "%lld"
#define FORMAT_UI8 "%llu"
#endif
```

In order to use the macros, KT uses some macros for printing debug information to the console using C++ variadic macros.

```C++
#if SEAM >= SEAM_0_0_2
// Dependencies:
#include "example1.h"
#include "example2.h"
// End dependencies.
#if SEAM == SEAM_0_0_2
#define PRINTF(format, ...) printf(format, __VA_ARGS__)
#define PRINT(item) Print(item)
#else
#define PRINTF(x, ...)
#define PRINT(item)
#endif
#endif
```

When you see PRINTF or PRINT in all caps, this means this is debug information for this specific seam. In order for this system to work, if there are dependencies, they must be included **BEFORE** the `#if SEAM == SEAM_0_0_2` section. The reason for this becomes evident when the order is reversed because the macros will get defined multiple times and you'll end up printing debug info from other seams.


## 2.8 Global and Module Configuration

Each source code module contains a `config.h`, the config file, and `global.h`, the global file it the `$ModuleRoot`. There is no `config.h` file for the primary SDK because the assembly is configured in the `stdafx.h` file. Instead implementations designate the first include module as the SDK core.

The `global.h` file contains `#include` references for all of the module's public facing API the entire module may be imported by importing the `global.h` file. The `config.h` file contains all of the modules dependencies and configuration information. In the target program there is a `assembly.h` file that gets `#include` inline from each module's `config.h` file and is used to configure the compiled assembly.

## 2.9 Build-time Optimizations

In C++ there are some language features that are very powerful, but slow down the compiler a lot.

### 2.9.a Unique Translation Unit Names

This rule straddles the line between framework and stylesheet, but leans towards the framework because it affects the way the system builds.

C++ compilers support partial classes; meaning that you can split up an object's implementation into multiple files, which is useful for splitting up work on classes between multiple developers so it's cleaner to merge the branches.

For each implementation file compiled, the compiler generates a translation unit (TU or TUs) which then get linked together during the link stage. This TU is given the file's name. The compiler will use a hash table of TUs to check if the implementation was split between multiple TUs and if there are multiple translation units with the same name the compiler must check which TU to add the code to. Hash table collisions are very time consuming to resolve leading to longer build time. For this reason implementation files should have unique filenames in order to reduce unneeded hash table collision resolutions.

F2 Compliant software have unique implementation filenames named after the namespace name in modulename_translation format, where all modulename(s) are unique.

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

## 2.10 Usage of Precompiled header

The use of precompiled headers dramatically speeds up the compilation of C++ software. F2 Compliant software have a precompiled header that contains the SEAM_MAJOR, SEAM_MINOR, and SEAM_PAGE macros.

## 2.l1 Usage of Asserts

Usage of assert statements in F2 is for development phase as a form of training wheels, and when the wheels are taken off, you should be able to ride the bike without falling. Occasionally there will be an environmental hazard when you're riding that causes you to fall off the bike, such as ice or a bad curve. You can have to options, you can either ride with training wheels your entire life, slowing you down, or you can put up with the occasional fall by riding without the them and not be slowed down. This depends on the application. Some applications require minimized ROM footprint. In these circumstances, you may want to make assert statements only during debug phase and run without the training wheels because it doesn't matter if it messes up in operation because of another recover mechanism; or you don't care if you ride with the training wheels on because you're not going fast and you just need to never fall down. That is the design of the assert system in KT. The key edge case to keep in mind is the bit flip, which will be the most common non-critical bug; if the system is crashing for anything other than a bit flip then you have other problems. The chance of a bit flip is very low, but the chance of a bit flip causing a null pointer substantially lower, only N/(2^N), where N is the number of bits in a word. Null pointers an excellent example of training wheels that can generally be taken off after the system is working.

## 2.11 C ABI

A *C Application Binary Interface* (*ABI*) helps with the creation of cross-language bindings and dramatic reduction of compile time. KT uses a modern system of concealing library template implementations behind a C ABI with explicit data types, and using modern C++1x wrappers. KT does not at this time provide a C99 interface but future versions will.

## 2.12 Framework for C++ Templates

This rule is different than the style guide for templates because the style guide dictates how the code will be formatted, but the rules in this section dictates the structure of how the templates are programmed.

C++ Templates can not be precompiled into header files and may create duplicate copies of static data in the library assembly and the executable assembly. The only way to get around this is to not put templates the precompiled library header files. F2 Compliant Software may use templates, but provide a header file without templates that contains wrapper functions for instances of specialized templates.

## 2.13 Highest-Seam Library

The *Highest Seam Number* (**HSM**) Once many libraries need to get compiled, the compile time of the application will significantly slow down. To combat this, Kabuki Toolkit is designed to be compiled in sequential enumerated seams where the highest value seam, meaning highest value page, major, and minor seam numbers, that passes the seam unit test is built as a `.lib` or `.a` file and linked to in the highest value seam that does not pass the unit test. The greatly reduces compile time and also helps debug assembly boundary issues.

## 2.14 Number Handling

F2 handles numbers as is specified in the SCRIPT specification

### 2.14.a Not-a-number

F2 uses the highest possible unsigned integer, `0b'1...1`, and the lowest possible signed number, `0b'10...0`, to represent not-a-number (*NaN*).

### 2.14.b Upper and Lower bounds

The default upper and lower bounds is dictate by the most significant bit that isn't the sign bit. For unsigned numbers this is bit (n-1) and for signed numbers this is (n-2), when n is the number of bits.

## 2.15 Year 2038 Epoch Handling

F2 software is handles the Year 2038 time epoch, the year when 32-bit signed integer timestamps cycle max out. One property to be aware of about signed versus unsigned handling of numbers is that unsigned numbers are designed to cycle from the max value, 2^n-1, where n is the number of bits, back to 0. With signed numbers this is not the case.

## 2.16 Template Hiding and Pre-Hungarian Notation

In order to hide some templates, it is required to use post-Hungarian notation. F2 uses the ASCII Data Types for Hungarian notation (**@see** SCRIPT Specification).

```C++
template<Typename T>
T GetSomething () { return 0; }

// Public interface
uint8_t GetSomethingUI1 () { return 0; }
float GetSomethingFLT () { return 0.0f; }
```

## 2.17 Important Terminology

### 2.16.a Socket vs Buffer

A socket is just like a real-world socket only with memory; a socket is a block of memory that something fits snuggly inside. A buffer in contrast typically has extra memory intended to be left unused as a buffer. A buffer may be a socket and a buffer fits in a socket, but a socket doesn't have an overflow buffer.

# License

Copyright 2018 (C) [Cale McCollough](https://calemccollough.github.io). All rights reserved (R).

This is a free and open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, trade secrets, art, and other content contained this file, folder and kabuki-script GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository or by email to Cale McCollough at [calemccollough@gmail.com](mailto:calemccollough@gmail.com) to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
