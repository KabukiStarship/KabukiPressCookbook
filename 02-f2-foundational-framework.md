# [2] F2 Foundational Framework

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

The F2 Foundational Framework, or F2 for short, is a Modern-C++1x Seam Tree Unit Testing Framework and nanoframework for creating microframeworks and benchmarking algorithms. F2 provides:

* Modified Google C++ Style Guide.
* Rapid compiling library format.
* Fastest number printing and scanning algorithms and associated algorithms.
* Seam Trees maximize test quality by quickly pealing back and decoupling software layers and enumerating work to be done to minimize development and maintenance costs.
* Minimized set of common console IO functions for concise debug macros.
* Utilities for benchmarking algorithms.
* Integer Not-a-Numbers (NaNs) and default integer upper bounds.
* ASCII Data Types.
* Nothing else so you can embed F2 into research papers and quick little ditties.

## [2.1] F2 C++ Style Guide

The F2 C++ Style Guide is a modified version of the Google C++ Guide that can be found at:

[https://github.com/kabuki-starship/kabuki-toolkit/tree/master/docs](https://github.com/kabuki-starship/kabuki-toolkit/tree/master/docs)

Major differences between the Google and F2 C++ Style Guides are:

* Allowance of all uppercase public member names.
* Doxygen comment style guide.

## [2.2] Almost-UML-Compliant

Almost-UML-compliant means that the core of the proprietary software is UML compliant with the exceptions of allowed use of Hungarian Notation UML Templates and the CFacade, and third-party libraries may not be UML-compliant but are mapped in an Almost-UML-compliant object wrapper.

## [2.3] Hungarian Notation UML Templates

Hungarian notation is a naming convention in which the name of the class implies what data type is used to store the data. Post Hungarian Notation places the class name before the type name(s); for example `FooInt32 ()` implies that the function foo returns an `int32_t` type. Pre-Hungarian Notation places the type name before the class name; for example `Int32Foo ()`. The default endianness of Hungarian notation is Post-Hungarian notation.

F2 Software supports the use of Hungarian Notation to incorporate templated objects into Compliant UML Models. F2 software reserves the symbols UI, SI, and I for n-bit unsigned integer, signed integer, and either signed or unsigned integer, and T for a generic type. F2 software refers to all other data types as ASCII Data Types if an ASCII Data Type exists for that type.

```C++
// Class Foo_UI_SI_I with function Foo_SI2 translates to the following C++ class:

template<typename UI, typename SI, typename I>
struct TFoo {
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

## [2.4] C Structs and CFacade

C is not UML compliant because it is not object oriented. F2 incorporates C into UML using CFacade(s) What this means is that the c module tag is used as an object in a UML model. In the code base there is no CFacade object, it's just a graphical representation for use in UML diagrams to better support cross-platform and cross-language programming.

In order to distinguish between a C-ABI struct and a C++ object file, the C prefix is added to every C struct, but C++ objects to not use this convention, which helps distinguish between C and C++ functionality.

## [2.5] The Assembly Line Boundary

An assembly in Assembly programming and C/C++ is a set of source code compiled into a single contiguous block of executable code using the C or similar calling convention. There are only two primary types of assemblies, precompiled libraries and executable files. The rule in C++ for libraries and DLLs is that a precompiled library may not include any other precompiled libraries, but a executable file may incorporate multiple precompiled libraries. This is because of the way that C++ does name mangling and setups up the static memory.

## [2.6] Standard Seam Trees



#### Rules Against Seam Gerrymandering

Seam Gerrymandering is, as the name implies, very similar to political district Gerrymandering, only it is when a seam covers regions that are representative of the seam district. Seams should not be Gerrymandered in such a way to the seam is falsely represented and should have a proper demo apps. Instead, modules should be decomposed into a tree structure, assigned permanent Seam Tree Node Index, and Scrums collapsed into SPRINT(s) upon release. The purpose of this system is to avoid sweeping dirt around on the forest floor and instead sweep the dirt out of the scrums.

### [2.7] Standard Seam Tree Macros

F2 software uses a replacement for the standard library that rapidly compiles and does not require use of precompiled libraries. The F2 convention however does use the Microsoft standard `pch.h` to `#include <cstdint>`, `#include <cstdarg>`, and to define some compiler-specific stuff and the macros using the `<kabuki/f2/config.h` file. F2 software provides the precompiled header file in the $(ProjectDir)\ file.

```C++
// Barebones pch.h header.
#pragma once

#include <cstdarg>
#include <cstdint>

typedef unsigned int uint;

#define API

#define SEAM_LAYER   0
#define SEAM_MILLI   0
#define SEAM_MICRO   0
#define SEAM_NANO    0
#define SEAM_PICO    0
#define SEAM_FEMTO   0

#define SEAM_PROJECT 0
#define SEAM_SPRINT  0
#define SEAM_SCRUM   0

#define SEAM_0_0_0 1
#define SEAM_0_0_1 2
#define SEAM_0_0_2 3
#define SEAM_N 3

#define WORD_SIZE 64

#define APP_EXIT_SUCCESS 0
#define APP_EXIT_FAILURE 1

#ifndef INCLUDED_SEAMS
#define INCLUDED_SEAMS

#if SEAM_LAYER == 0
#if SEAM_MAJOR == 0 //< SEAM_MAJOR 0 is reserved for the SDK.
#if SEAM_MINOR == 0
#define SEAM_0_0_0
#define SEAM 1
#elif SEAM_MINOR == 1
#define SEAM_00_00_1
#define SEAM 2
#elif SEAM_MINOR == 2
#define SEAM_0_0_2
#define SEAM 3
#endif
#endif  //< #if SEAM_MILLI == 0
#endif  //< #if SEAM_LAYER == 0

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


## [2.8] Global and Module Configuration

Each source code module contains a `config.h`, the config file, and `global.h`, the global file it the `$ModuleRoot`. There is no `config.h` file for the primary SDK because the assembly is configured in the `pch.h` file. Instead implementations designate the first include module as the SDK core.

The `global.h` file contains `#include` references for all of the module's public facing API the entire module may be imported by importing the `global.h` file. The `config.h` file contains all of the modules dependencies and configuration information. In the target program there is a `assembly.h` file that gets `#include` inline from each module's `config.h` file and is used to configure the compiled assembly.

## [2.9] Build-time Optimizations

In C++ there are some language features that are very powerful, but slow down the compiler a lot.

### [2.9.a] Unique Translation Unit Names

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

## [2.10] Usage of Precompiled header

The use of precompiled headers dramatically speeds up the compilation of C++ software. F2 Compliant software have a precompiled header that contains the SEAM_MAJOR, SEAM_MINOR, and SEAM_LAYER macros.

## [2.11] Usage of Asserts

Usage of assert statements in F2 is for development phase as a form of training wheels, and when the wheels are taken off, you should be able to ride the bike without falling. Occasionally there will be an environmental hazard when you're riding that causes you to fall off the bike, such as ice or a bad curve. You can have to options, you can either ride with training wheels your entire life, slowing you down, or you can put up with the occasional fall by riding without the them and not be slowed down. This depends on the application. Some applications require minimized ROM footprint. In these circumstances, you may want to make assert statements only during debug phase and run without the training wheels because it doesn't matter if it messes up in operation because of another recover mechanism; or you don't care if you ride with the training wheels on because you're not going fast and you just need to never fall down. That is the design of the assert system in KT. The key edge case to keep in mind is the bit flip, which will be the most common non-critical bug; if the system is crashing for anything other than a bit flip then you have other problems. The chance of a bit flip is very low, but the chance of a bit flip causing a null pointer substantially lower, only N/(2^N), where N is the number of bits in a word. Null pointers an excellent example of training wheels that can generally be taken off after the system is working.

## [2.12] C ABI

A *C Application Binary Interface* (*ABI*) helps with the creation of cross-language bindings and dramatic reduction of compile time. KT uses a modern system of concealing library template implementations behind a C ABI with explicit data types, and using modern C++1x wrappers. KT does not at this time provide a C99 interface but future versions will. The C ABI can be found in the `public.h` files.

## [2.13] Framework for C++ Templates

This rule is different than the style guide for templates because the style guide dictates how the code will be formatted, but the rules in this section dictates the structure of how the templates are programmed.

C++ Templates can not be precompiled into header files and may create duplicate copies of static data in the library assembly and the executable assembly. The only way to get around this is to not put templates the precompiled library header files. F2 Compliant Software may use templates, but provide a header file without templates that contains wrapper functions for instances of specialized templates.

## [2.14] Integer Not-a-Numbers

F2 handles numbers as is specified in the SCRIPT specification, which can be found at:

[https://github.com/kabuki-starship/script/blob/master/script_specification_rfc.md#22-integers](https://github.com/kabuki-starship/script/blob/master/script_specification_rfc.md#22-integers)

### [2.14.a] Not-a-number

F2 uses the highest possible unsigned integer, `0b'1...1`, and the lowest possible signed number, `0b'10...0`, to represent not-a-number (*NaN*).

### [2.14.b] Upper and Lower bounds

The default upper and lower bounds is dictate by the most significant bit that isn't the sign bit. For unsigned numbers this is bit (n-1) and for signed numbers this is (n-2), when n is the number of bits.

## [2.15] Year 2038 Epoch Handling

F2 software is handles the Year 2038 time epoch, the year when 32-bit signed integer timestamps cycle max out. One property to be aware of about signed versus unsigned handling of numbers is that unsigned numbers are designed to cycle from the max value, 2^n-1, where n is the number of bits, back to 0. With signed numbers this is not the case.

## [2.16] Template Hiding and Pre-Hungarian Notation

In order to hide some templates, it is required to use post-Hungarian notation. F2 uses the ASCII Data Types for Hungarian notation (**@see** SCRIPT Specification).

```C++
template<Typename T>
T GetSomething () { return 0; }

// Public interface
uint8_t GetSomethingUI1 () { return 0; }
float GetSomethingFLT () { return 0.0f; }
```

## [2.17] Static Test Functions and Functions

In C, a static function is only visible inside of that translation unit. F2 software is designed for rapid compilation and execution. Usage of static functions outside of classes shall be reserved for unit tests and cache optimization in order to duplicate the function inside multiple translation units to optimized for locality of reference. In other words, don't use static just to be lazy, put it in the implementation file.

## [2.18] Static Arrays

Static arrays in F2 are handled using wrapper functions that hide the static data from the headers that get compiled into each translation unit. Whenever the size of the array is used in the software, the wrapper function shall return a pointer to the array and the reference to the size variable passed in as a parameter.

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

## [2.19] Universal Text Formatter

F2 uses a ultra-fast text printing framework designed to work similar to the C++ `std::cout` and provide the formatting functionality to `printf` using some utility classes. The most noticeable difference between the operation of the two are that the UTF uses a pointer to the first and last Unicode character in a buffer.

### [2.19.a] Contiguous Text

Contiguous text is text in a buffer doesn't have any gaps in the memory. The Crabs text system is designed to work with plain-old-C strings on the stack, `std::string`, and to integrate into other applications and languages using C bindings. Text is written using the Printer class, and is scanned from the Scanner class.

## [2.20] Printer

The Printer is a utility for printing UTF-8, UTF-16, and UTF-32 strings. The class stores 2 pointers, the end of buffer pointer and the cursor. The cursor is required to always point at a location in memory that you can write a nil-term char (i.e. a zero). The Printer class uses the Print functions and the overloaded `operator<<` similar to `std::cout`.

### Printer Example

```C++
#include <kabuki/crabs/tstr.h>
enum { kSize = 1024 };
char buffer[kSize + 1];
UTF8 utf (buffer, kSize);

utf << "Testing " << 1 << << Center (", 2, ", 7) << Right ('3', 3)
    << CBinary (123) << CHex (45) << '\n' << CLine ('-', 10);
```

#### Result

```
Testing 1 , 2,    3 1111011 2D
----------
```

### Template Optimizations for UTF-16 and UTF-32

The usage of C++ templates in headers prevents the system from being able to precompile code, dramatically increasing compile time. The solution is to place all templates in one header, and to create template specializations for the common types using inline wrapper functions with implementation in a `.cc` file.

### UTF-16 Printer2 Example

```C++
enum { kSize = 1024 };

#include <crabs/tutf.h>
char16_t buffer[kSize + 1];
Printer<char16_t> print (buffer, kSize);
print << "Testing " << 1 << ", 2, " << '3';

#include <crabs/str2.h>
char16_t buffer2[2 * kSize + 1];
Utf2 print2 (buffer2, kSize);
print2 << "Testing " << 1 << ", 2, " << '3';
```

## [3.4] Console vs Terminal

In Crabs there a difference between an Console and a Terminal. A Crabs Console is like the normal console that is usually also called a Terminal. A Crabs Terminal is specially a serial stream that runs the SCRIPT Protocol.

## License

Kabuki Toolkit Cookbook Copyright (C) 2018 Cale McCollough <<[mailto:cale.mccollough@gmail.com](cale.mccollough@gmail.com)>> <<[https://calemccollough.github.io](https://calemccollough.github.io)>>

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program.  If not, see <https://www.gnu.org/licenses/>.
