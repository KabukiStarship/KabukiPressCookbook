```
 /\
( /   @ @    ()   
 \  __| |__  /    ██████╗██████╗  █████╗ ██████╗ ███████╗
  -/   "   \-    ██╔════╝██╔══██╗██╔══██╗██╔══██╗██╔════╝
 /-|       |-\   ██║     ██████╔╝███████║██████╔╝███████╗
/ /-\     /-\ \  ██║     ██╔══██╗██╔══██║██╔══██╗╚════██║
 / /-`---'-\ \   ╚██████╗██║  ██║██║  ██║██████╔╝███████║
  /         \     ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝ ╚══════╝
```

# 2 Chinese Room Abstract Stack Machine

The Chinese Room Abstract Stack Machine (Crabs) is a virtual machine (VM) engine define by the SCRIPT Specification that allows rooms to communicate with messages through slots in doors that connect rooms. Crabs is composed of the ASCII Data Types, a cross-platform standard set of contiguous data structures.

## 2.1 F2 Foundational Framework

```
   _  _  _  _  _    _  _  _       
  (_)(_)(_)(_)(_)_ (_)(_)(_) _    
  (_)           (_)         (_)      __      
  (_) _  _                _ (_)    [|-oundational
  (_)(_)(_)            _ (_)      
  (_)               _ (_)               __           
  (_)            _ (_) _  _  _        [|-ramework   
  (_)           (_)(_)(_)(_)(_)   

```

The F2 Foundational Framework, or just F2, is a `Modern-C++ Framework` for building software with the Chinese Room Abstract Stack Machine (Crabs).

A software framework provides a standard way to build and deploy applications using a boilerplates. The end-goal of a good framework is to use industry best practices and repeated design decisions in order for the user to be able to anticipate what to do, and to provide enough boilerplates to suite the target audience's needs.

A software architecture differs from a framework in that it contains a framework, but just like a building's frame versus architecture, architecture contains much more things like walls and doors. A frame best described as a structural support for many different architectures.

What a framework is not is a style guide or the way you make your code look pretty. A framework however may use a style guide that makes the code look pretty. A style guide may even contain much of the rules for the framework. The dividing line between the two is where the style-guide element a standard way to build and deploy applications using a boilerplate, such as when the style element affect:

1. the build-time
2. the unit testing process
3. how the application is deployed say for instance as a DLL.

A framework differs from an SDK in that the framework is only good for a specific applications where an SDK may contain one or more frameworks. Multiple frameworks may also share a common micro-framework.

F2 uses the Google C++ Guide. This requirement is trace to the fact that the stylesheet dictates the way the software is built and that it decreases the build time through decades of curated well documented C++ best practices. The style guide can be found at:

[https://google.github.io/styleguide/cppguide.html](https://google.github.io/styleguide/cppguide.html)

### 2.1.a Almost-UML-Compliant

Almost-UML-compliant means that the core of the proprietary software is UML compliant with the exceptions of allowed use of Hungarian Notation UML Templates and the CFacade, and third-party libraries may not be UML-compliant but are mapped in an Almost-UML-compliant object wrapper.

### 2.1.b Hungarian Notation UML Templates

Hungarian notation is a naming convention in which the name of the class implies what data type is used to store the data. Post Hungarian Notation places the class name before the type name(s); for example `FooInt32 ()` implies that the function foo returns an `int32_t` type. Pre-Hungarian Notation places the type name before the class name; for example `Int32Foo ()`. The default endianness of Hungarian notation is Post-Hungarian notation.

F2 Software shall support the use of Hungarian Notation to incorporate templated objects into Compliant UML Models. F2 software shall reserve the symbols UI, SI, and I for n-bit unsigned integer, signed integer, and either signed or unsigned integer, and T for a generic type. F2 software shall refer to all other data types as ASCII Data Types if an ASCII Data Type exists for that type.

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

#### 2.1.c CFacade

C is not UML compliant because it is not object oriented. F2 incorporates C into UML using CFacade(s). What this means is that the c module tag is used as an object in a UML model. In the code base there is no CFacade object, it's just a graphical representation for use in UML diagrams to better support cross-platform and cross-language programming.

### 2.1.d The Assembly Line Boundary

An assembly in Assembly programming and C/C++ is a set of source code compiled into a single contiguous block of executable code using the C or similar calling convention. There are only two primary types of assemblies, precompiled libraries and executable files. The rule in C++ for libraries and DLLs is that a precompiled library may not include any other precompiled libraries, but a executable file may incorporate multiple precompiled libraries. This is because of the way that C++ does name mangling and setups up the static memory.

## 2.1.e Precompiled headers

F2 software shall use C++ precompiled headers, the requirement being that they speed up the build process. The convention is to use the `stdafx.h` file, but a filename is not a framework so the name does not matter but the default is `stdafx.h`. F2 software provides the precompiled header file in the $ProjectDirectory/source file.

## 2.1.f Page, Major and Minor Seams

The Page-Major-Minor Seam Enumeration System is based upon a standard 8.5" by 11" sized sheet of paper with enough room for margins, a header, a paragraph, and a footer to allow for clean printing into Engineered Software Analysis and Software System Definitions either vertically or horizontally. Enumerated seams allow developers to peal back the layers of the code to the core so you can debug that seam in isolation with debug information that is customized for that seam.

Page and Major seams numbers are contiguous integers either in the range [0,9] or [00,99] enumerated in the order they are to be tested. If the index is range [0,9] the seam number will be a 2 digit number. If the index is range [00,99] the seam number will be a 4 digit number.  Most software will fit neatly in a single page with less than 11 pages and 11 major seams, but  minor seams may number in the hundreds. For this reason the minor seam is combined with the 2 or 4 digit Page-Major Seams Number. For example SEAM_12_345 is Page number 1 (the second page), Major Seam 2 (the third major seam.), and Minor seam 345 (the 346th minor seam.).

The smallest seam increment is the Minor Seam. A Minor Seam is defined as a group of one or more files that are decoupled from the minor seam above them, and those files have debug information specific to that minor seam.

The second largest seam increment is the Major Seam. A Major Seam is defined as a group of two or more Minor Seams that have one or more executable projects associated with them.

Namespaces and modules may be spread out across multiple seams. For instance, work on an module may start in SEAM_01_0 and SEAM_1 may have a working functioning executable program. On SEAM_02 the object then goes through one or more development iterations.

The largest seam increment currently defined by F2 is a Page Seam. A Page Seam is defined as a group of two or more major seams that fit neatly on single 8.5" by 11" sheet of paper; hence the name Page Seam.

Modules may appear on multiple seams and pages. For example, part of a module may be introduced in SEAM_01 and that module may also be developed upon in SEAM_02, then not developed upon in SEAM_03, but again developed upon in SEAM_04. When a previous seam has been changed, it may regress the Progress Seam number. The Project Progress Seam Number is the seam number is the highest seam number that has passed all of the unit tests.

Implementations that cannot fit their software on a single page of paper first must  perform a sanity check and determine if the design could be simplified and may set the size of their engineered software analysis to some paper size larger than 8.5" x 11" but must shrink the page to 8.5" x 11" and provide an online link to the full-sized Page-Seam Diagram.

### 2.1.g Macros



```C++
#define PAGE_SEAM 0
#define MAJOR_SEAM 4
#define MINOR_SEAM 2
```

In order to use the macros, KT uses some macros for printing debug information to the console using C++ variadic macros.

```C++
#if MAJOR_SEAM > 1 || MAJOR_SEAM == 1 && MINOR_SEAM >= 4
// Dependencies:
#include "door.h"
// End dependencies.
#if MAJOR_SEAM > 1 || MAJOR_SEAM== 1 && MINOR_SEAM == 1
#define PRINTF(format, ...) printf(format, __VA_ARGS__);
#define PUTCHAR(c) putchar(c);
#else
#define PRINTF(x, ...)
#define PUTCHAR(c)
#endif
#endif
```

When you see PRINTF or PUTCHAR in all caps, this means this is debug information for this specific seam. In order for this system to work, if there are dependencies, they must be included **BEFORE** the `#if MAJOR_SEAM > 1 || MAJOR_SEAM== 1 && MINOR_SEAM == 1` section. The reason for this becomes evident when the order is reversed because the macros will get defined multiple times and you'll end up printing debug info from other seams.

## 2.1.h Global and Module Configuration

Each source code module shall contain a `config.h`, the config file, and `global.h`, the global file it the `$ModuleRoot`. There is no `config.h` file for the primary SDK because the assembly is configured in the `stdafx.h` file. Instead implementations shall designate the first include module as the SDK core.

The `global.h` file shall contain `#include` references for all of the module's public facing API the entire module may be imported by importing the `global.h` file. The `config.h` file contains all of the modules dependencies and configuration information. In the target program there is a `assembly.h` file that gets `#include` inline from each module's `config.h` file and is used to configure the compiled assembly.

## 2.1.i Build-time Optimizations

In C++ there are some language features that are very powerful, but slow down the compiler a lot.

### 2.1.j Unique Translation Unit Names

This rule straddles the line between framework and stylesheet, but leans towards the framework because it affects the way the system builds.

C++ compilers support partial classes; meaning that you can split up an object's implementation into multiple files, which is useful for splitting up work on classes between multiple developers so it's cleaner to merge the branches.

For each implementation file compiled, the compiler generates a translation unit (TU or TUs) which then get linked together during the link stage. This TU is given the file's name. The compiler will use a hash table of TUs to check if the implementation was split between multiple TUs and if there are multiple translation units with the same name the compiler must check which TU to add the code to. Hash table collisions are very time consuming to resolve leading to longer build time. For this reason implementation files should have unique filenames in order to reduce unneeded hash table collision resolutions.

F2 Compliant software shall have unique implementation filenames named after the namespace name in namespace_module_translation format.

#### Example

```C++
namespace Foo { namespace Bar {
  struct Go;
}};
```
##### Output

Filename is `foo_bar_go.cc`.

### 2.1.k Use of Precompiled header

The use of precompiled headers dramatically speeds up the compilation of C++ software. F2 Compliant software shall have a precompiled header that contains the MAJOR_SEAM, MINOR_SEAM, and PAGE_SEAM macros.

### 2.1.k Framework for C++ Templates

This rule is different than the style guide for templates because the style guide dictates how the code will be formatted, but the rules in this section dictates the structure of how the templates are programmed.

C++ Templates can not be precompiled into header files and may create duplicate copies of static data in the library assembly and the executable assembly. The only way to get around this is to not put templates the precompiled library header files. F2 Compliant Software may use templates, but shall provide a header file without templates that contains wrapper functions for instances of specialized templates.

### 2.1.l Highest-Seam Library

Once many libraries need to get compiled, the compile time of the application will significantly slow down. To combat this, Kabuki Toolkit is designed to be compiled in sequential enumerated seams where the highest value seam, meaning highest value page, major, and minor seam numbers, that passes the seam unit test is built as a `.lib` or `.a` file and linked to in the highest value seam that does not pass the unit test. The greatly reduces compile time and also helps debug assembly boundary issues.

## 2.2 Text Printer and Scanner

Kabuki Script uses a fast text printing framework designed to similar to the C++ `std::cout` and provide some of the functionality to `printf`. The API works with contiguous strings and ring-buffer Slots.

### 2.2.a Contiguous Text

Contiguous text is text in a buffer doesn't have any gaps in the memory. The Crabs text system is designed to work with plain-old-C strings on the stack, `std::string`, and to integrate into other applications and languages using C bindings. Text is written using the Printer class, and is scanned from the Scanner class.

## 2.3 Slot

In the Chinese Room thought experiment, you write a message on a piece of paper and pass it through the slot in the door. The person in the room then performs a manual computer with pen and paper and misc. office supplies and writes the computed result on a piece of paper and passes it back through the door.

## 2.4 Printer

The Printer class stores 2 pointers, the end of buffer pointer and the cursor. The cursor is required to always point at a location in memory that you can write a nil-term char (i.e. a zero). The Printer class uses the Print functions and the overloaded `operator<<` similar to `std::cout`. The Print functions do not print nil-term char and you are responsible to ensure the proper delimiter is placed. The system allows for spaces and strings to be written without writing a delimiter every time you want to write to a string.

### Printer Struct

```
/** Utility class for printing to strings. */
struct Printer {
  char* cursor,  //< Write cursor pointer.
      * end;     //< End of buffer pointer.
};
```

### Printer Hello World Example

```
void PrintHelloWorld () {
  enum { kSize = 64 };
  char buffer[kSize];
  PrinterInit (kSize, buffer) << "Hello" << " world! "
                              << 1 << ' ' << 2 << " 3;
}
```

# License

Copyright 2018 (C) [Cale McCollough](https://calemccollough.github.io). All rights reserved (R).

This is a free and open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, trade secrets, art, and other content contained this file, folder and kabuki-script GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository or by email to Cale McCollough at [calemccollough@gmail.com](mailto:calemccollough@gmail.com) to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
