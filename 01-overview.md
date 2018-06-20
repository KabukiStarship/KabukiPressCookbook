```
  ██╗  ██╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗██╗       
  ██║ ██╔╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝██║       
  █████╔╝ ███████║██████╔╝██║   ██║█████╔╝ ██║       
  ██╔═██╗ ██╔══██║██╔══██╗██║   ██║██╔═██╗ ██║       
  ██║  ██╗██║  ██║██████╔╝╚██████╔╝██║  ██╗██║       
  ╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝  ╚═════╝ ╚═╝  ╚═╝╚═╝
   /\
  ( /   @ @    ()    
   \  __| |__  /     ██████╗██████╗  █████╗ ██████╗ ███████╗
    -/   "   \-     ██╔════╝██╔══██╗██╔══██╗██╔══██╗██╔════╝
   /-|       |-\    ██║     ██████╔╝███████║██████╔╝███████╗
  / /-\     /-\ \   ██║     ██╔══██╗██╔══██║██╔══██╗╚════██║
   / /-`---'-\ \    ╚██████╗██║  ██║██║  ██║██████╔╝███████║
    /         \      ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝ ╚══════╝
```


# 1. Overview

This book is about the Kabuki Toolkit Modern-C++ Firmware-to-Software Development Kit (**F2SDK**), a Software-defined Networking Protocol (SDNP) called Searle's Chinese Room, Interprocess, and Telemetry (**SCRIPT**) Protocol that runs on SCRIPT Script (**Script2**) and the world-famous Chinese Room Abstract Stack Machine (**Crabs**).

The audience of this book is intermediate to expert programmers, though beginning C++ programmers may still find the book useful and will teach you Modern-C++ the right way. You would want to read this book if you're trying to learn Kabuki Toolkit or Script, or if you are interested on how to build Modern C++ SDKs. The book will walk you through the F2 Foundational Framework seams (@see Chapter 2) that build Kabuki Toolkit from the Crabs Embedded-C++1x core to F2 Foundational Framework to a fully-featured Firmware-to-Software Development Kit (F2SDK) with cross-platform and cross-language bindings.

This overview chapter will briefly explain the:

* Chinese Room AI Thought Experiment
* Kabuki Theater Theory of Consciousness.
* SCRIPT Specification.
* Kabuki Toolkit C++1x F2SDK.

## 1.1 Content Table

1.  *Overview*
    1. [Content Table](#11-content-table)
    2. [License](#12-license)
    3. [Preface](#13-preface)
    4. [Mission and Vision](#14-mission-and-vision)
    5. [SCRIPT Specification](#15-script-specification)
    6. [Kabuki Toolkit](#16-kabuki-toolkit)
    7. [Exercises](#17-exercises)
	4. [Mission and Vision](#14-mission-and-vision)
2.  [crabs](#03-seam-01-f2-and-crabs)
3.  [pro](#04-pro)
3.  [auth](#04-auth)
3.  [id](#04-id)
16. [Installers](#18-installers)

## 1.2 License

Copyright 2018 (C) [Cale McCollough](https://calemccollough.github.io). All rights reserved (R).

This is a free and open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, trade secrets, art, and other content contained this file, folder and kabuki-script GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository or by email to Cale McCollough at [calemccollough@gmail.com](mailto:calemccollough@gmail.com) to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

## 1.3 Preface

I'm writing this book because it's really hard to get good information about how to make a good SDK. You've got to go to engineering school and/or know a lot of really low-level stuff.

This whole project started in 2014 when a doctor friend of mine suckered me into making a DNA extraction machine he had a patent on that using a strong electromagnet, which he amateurishly chose 30A of current for which is ridiculous, to stir and head metal beads. He didn't exactly know how it was supposed to work and it was pretty laughable.

I needed to be able to do PWM on the magnets in real-time, which is a very intensive task on a small microcontroller over a serial line. I also needed to be able to shut the magnets off immediately to prevent killing my doctor friend with the 30A electromagnets. This was when I invented Script. Script had to be fast, lean, reliable, and, above all else, safe.

It took many years of tedious debugging and non-stop rework to get Script to a state of perfection. I learned a lot from this process and during the process I got into Test-driven development, which then helped me develop my own hybrid system called Minmax Driven Development, which is a combination of all of the N-Drive Development practices combined with the Minmax artificial intelligence theory.

 For more information about Minmax Driven Development please read my book [Engineering Invention Startups](https://github.com/CaleMcCollough/engineering-invention-startups/master/blob/01-Overview) #WorkInProgress. The essence of the theory behind Driving Development to mix a bunch of N-Driven Development processes together to minimize time to market by minimizing rework and maximizing time spent in the flow state using Rapid Documentation in Markdown. In order to manage all of these N-Driven processes we then use the Minmax algorithm to minimize the cost and maximize the reward.

## 1.4 Mission and Vision

The mission of this book is to teach people how to make technology with ASCII Script and Kabuki Toolkit using modern C++ practices, and get users up to speed as quickly as possible. The vision of this book is to provide a free Markdown version of the book to all, regardless of ability to pay, and earn money by selling paper books because paper books are awesome and teaching classes.

The vision of this book is to provide enough projects, code snippets, and explanations to inspire the reader to innovate and bring their product to market as soon as possible.

This book is also goes with the book by Cale McCollough entitled the Minmax Startup: Engineering Invention Startups using AI. Minmax Startup is a open source book markdown book with papers copies for purchase about how to invent, start, and run high tech startups using modern best practices with an AI twist. The mission in regards to Minmax Startup is to provide all people, regardless of ability to pay, with the educational resources they need to come up and share the bounties of this beautiful Earth and technology and entrepreneurial revolution. The vision is that people will actually buy paper copies of the book because paper books are awesome, not to make someone else wealthy while we are poor.

## 1.5 Philosophical Background

The bedrock of Scripts and Kabuki Toolkit are AI philosophy concepts of the Chinese Room and Kabuki Theater theory of consciousness. Having some knowledge of these theories are essential for continuing in AI.

### 1.5.a Chinese Room Thought Experiment

The Chinese Room is a famous artificial intelligence philosophy thought experiment invented by the philosopher John Searle. The experiment highlights the difference between strong vs weak AI and how a normal everyday room in an office or network of rooms can form to create a turning equivalent machine that can fluently speak any language. If you would like to learn more about the Chinese Room Thought Experiment, please visit https://wikipedia.org/wiki/Chinese_room.

### 1.5.b Kabuki Theater

Kabuki Toolkit is named after a famous artificial intelligence theory of consciousness called the Kabuki Theater Model of Consciousness. The Kabuki Theater concept is that our lucid consciousness is like viewing a Kabuki Theater in person; each actor on stage close up looks rather simple and imperfect, but when you put all of the actors and props on stage and place the viewer in a dark stage with stage lights focused on tiny portions of the stage in a controlled manner, it creates a Gestalt perception of consciousness where the whole is greater than the sum of the parts. On stage there are so many interesting things to look at that are far enough away you can't see their real-life imperfections, and it creates an illusion of lucid consciousness from your mind bouncing around all of the trippy stage props resulting in a saturation of the mind's short-term memory that tricks the mind into thinking it is a fluid experience.

## 1.6 SCRIPT Specification

Searle's Chinese Room, Interprocess, and Telemetry (SCRIPT) Specification, or Script for short, is a definition for a family of technologies based of the Chinese Room Thought Experiment. Script is useful for creating all kinds of apps, games, operating systems, consumer electronics, computers, etc with. Script was designed from scratch with a Sandwich Development Method to clean up and minimize the amount of code required to create apps as well as the memory and overhead processing using modern C++1x with cross-language bindings. Script specifies:

* ASCII Data Types
* Universal Polar Addressing
* SCRIPT Protocol, Crabs, and ASCII Script
* ICAN3 Distributed Nomination System

### 1.6.b ASCII Data Types

The Automata Standard Code for information Interchange (ASCII) Data Types are a set of POD and complex data structures that can define most commonly-used computerized data. ASCII Data Types support all of the C++ data types, UTF-8, UTF-16, and MSB Variant Encoding, 8, 16, 32, 64, 128, 256, 512, 1024, 1024, 4096, and 4096, and 8192-bit signed and unsigned integers, 16, 32, 64, and 128-bit floating-point numbers, and a set of map data structures that use contiguous memory. The use of contiguous memory is very useful for interprocess communication and network apps. The data structures work as inter-process pointers that allows multiple processors to communicate and to perform reflections.

### 1.6.c Universal Polar Addressing

Universal Polar Addressing, the Telemetry Searle's Chinese Room, Interprocess, and **Telemetry** Protocol, is a form of GPS coordinates that uses latitude and longitude as well as height above or below the earth's surface convey Telemetry data and to route ultra-high-speed internet signals.

### 1.6.d SCRIPT Specification

The SCRIPT Protocol is a software-defined networking protocol (SDNP) based on the Chinese Room that supports both byte-encoded messages and human-readable text scripts. SDNP have the unique property that the languages may be swapped out dynamically at run-time and multiple language may coexists with each other in a single virtual machine. This is performed using the Chinese Room Abstract Stack Machine (Crabs), also called the Magic Crabs.

Crabs is a Virtual Machine Framework that uses some simple rules for how to detecting and handling keys, function parameters and arguments, and erroneous data and interpreting byte streams. Crabs is built for raw speed using modern C++ stack programming. Stack programming is a technique where as much data is placed on the stack as is possible and appropriate, and functions are optimized to minimize the number of register pushes and pops associated with function calls by taking advantage of how the C and C++ compiler handles the stack.

ASCII Script is the reference Script API. ASCII Script is responsible for dictating the SCRIPT Protocol SDNP features such as handling keys, function parameters and arguments, and erroneous data. When feature is introduced to the SCRIPT Protocol, the feature must have a defined ASCII Script implementation. This does not mean that is the only implementation, only that it is the reference implementation. Feel free to make as many implementations as you would like; gold stars going to all who get AI to write it's own implementation.

## 1.7 `Modern C++`

`Modern C++` isn't just a buzz-word, it's a way of life. `Modern C++` means many things, but arguably most importantly that:

1.  A detailed best practice style guide and coding conventions are used. **✓**
2.  The code uses C++1x language features **where appropriate**. **✓**
3.  The code performs as much functionality at compile time as possible. **✓**
4.  The code uses a standardized set of general purpose data structures such as std or crabs. **✓**
6.  Code repositories use Issue Driven Development or competing best practice in order to remain agile and the master branch always passes an automated unit test script. **/**
7.  The code uses *Stack Programming* techniques to minimizes the use of dynamic memory by keeping as much data as possible in the CPU registers and on the hardware-assisted stack. **✓**
8.  Smart pointers are used when dynamic memory is required unless performance is critical. **✓**
10. Primary SDK is programed with cross-platform with cross-language bindings. **/**
11. API documents are automatically generated using metadata tags such as Doxygen. **✓**
12. Code uses structured programming with the exception of performance critical applications. **✓**
13. Libraries may integrate `Antiquated-C++`, meaning `C++` code that is not modern, but `Antiquated-C++` is wrapped with `Modern-C++ Adapters` and are segregated from the `Modern-C++` code and marked. **/**

## 1.8 Kabuki Toolkit

Kabuki Toolkit is a `Modern C++` `Firmware-to-Software Development Kit` (`F2SDK`), meaning it can be used to create anything from firmware to software. `Modern C++` means that it is written is written using C++1x language features and uses modern best practices. The benefit of this design choice is that it is faster and easier (and most importantly cheaper) to create connected devices using one high quality unified development kit than it is to learn multiple APIs that are all formatted in different style guides and create an anarchy of design choices.

KT leverages an automated build tool (still in the works) called the Sloth that automates the importing and updating of third-party libraries. The tool flattens source code hierarchy, minimize the number of directories, refactor namespaces into generics, and reformat all of the code into to a single style guide.

KT at it's core is the reference implementation of ASCII Script. KT then builds on premium open-source C and C++ SDKs, and wraps them with ASCII Script. If a better underlying implementation is found and the community agrees to upgrade, then in that module will be replaced with a better wheel; the goal being to minimize the number of wheels being invented and maximize revenue from selling tires and hubcaps for a minimum cost.

### 1.8.a Kabuki Toolkit Modules

#### `::_` Chinese Room Abstract Stack Machine

The Chinese Room Abstract Stack Machine (Crabs) is a lightweight Embedded-C++ application framework for creating virtual machines. Crabs is highly configurable and uses statically allocated cache-aligned memory with optional dynamic memory wrapper classes and contiguous memory data structures for **BLAZING** fast performance with a minimal RAM footprint. Crabs has the unique property that it works identically on 8/16, 32, and 64-bit systems.

#### `tek` Firmware Toolkit

The firmware toolkit contains the Unicontroller, a powerful general purpose controller for audio, midi, DMX lights, ASCII Script, and more. Unicontroller makes creating light controllers and MIDI and DMX controllers easy using Crabs.

#### `kabuki.toolkit.al` Audio Library

The audio library provides cross-platform audio using OpenAL-Soft and PortAudio, with DSP and audio effects is provided by Maximilian.

#### `kabuki.toolkit.app` Application framework

The application framework provides an operating system abstraction layer for Crabs for users to interact with stuff like application windows and system tray applications.

#### `kabuki.toolkit.data` Data and Logging Library

Data and logging provide additional commonly used data structures not provided by the ASCII Data Types.

#### `kabuki.toolkit.hmi` Human-machine Interface Library

The Human-Machine Interface (HMI) library provides classes for interfacing humans with machines.

#### `kabuki.toolkit.id` Identification Library

The Identification Library contains a contact list and tools to handle users in multiuser systems.

#### `kabuki.toolkit.gl` Graphics library

The Graphics Library is based on Cairo ([https://www.cairographics.org](https://www.cairographics.org)) , a industry standard `C` vector graphics API used in Android, Chrome, Firefox, and hundreds of other software applications, and PLplot, a robust and powerful math plotting library in `C`.



#### `kabuki.toolkit.gui` Graphical User Interface

The Graphical User Interface (GUI) Library currently does not exist

#### `kabuki.toolkit.math` Math Library

The Math library contains tools for compile-time and run-time math, and for performing distributed scientific processing using Script.

#### `kabuki.toolkit.midi` MIDI Library

The MIDI Library provides a standard set of MIDI drivers and tools built on RtMidi and mbed.

#### `kabuki.toolkit.pro` Projects, Tasks, and Scheduling Library

Projects, Tasks, and Scheduling Library contains tools for creating project trees and scheduling tasks. The library provides some Script classes for interfacing with revision control systems via Console Scripts.

#### `kabuki.toolkit.store` Store and Inventory Library

The Store and Inventory Library contains a few classes for creating virtual inventories and assigning prices to items.

## 1.9 F2 Foundational Framework

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

The F2 Foundational Framework, or just F2, is a `Modern-C++ Framework Foundation` that is used to build and deploy Kabuki Toolkit.

A software framework provides a standard way to build and deploy applications using a boilerplates; likewise a framework foundation is the foundation for how the application is built and deployed. Just like a building with a framework, the framework is connected to the ground through a foundation.

A software architecture contains a framework but differs from a framework in that it, just like a building's frame versus architecture, architecture contains much more things like walls and doors. A frame best described as a structural support for many different architectures. The foundation is then the foundation that keeps the frame in the correct position.

What a framework is not is a style guide or the way you make your code look pretty. A framework however may use a style guide that makes the code look pretty. A style guide may even contain much of the rules for the framework. The dividing line between the two is where the style-guide element a standard way to build and deploy applications using a boilerplate, such as when the style element affect:

1. the build-time
2. the unit testing process
3. how the application is deployed say for instance as a DLL.

F2 uses the Google C++ Guide. This requirement is trace to the fact that the stylesheet dictates the way the software is built and that it decreases the build time through decades of curated well documented C++ best practices. The style guide can be found at:

[https://google.github.io/styleguide/cppguide.html](https://google.github.io/styleguide/cppguide.html)

### 1.9.a Almost-UML-Compliant

Almost-UML-compliant means that the core of the proprietary software is UML compliant with the exceptions of allowed use of Hungarian Notation UML Templates and the CFacade, and third-party libraries may not be UML-compliant but are mapped in an Almost-UML-compliant object wrapper.

### 1.9.b Hungarian Notation UML Templates

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

#### 1.9.c CFacade

C is not UML compliant because it is not object oriented. F2 incorporates C into UML using CFacade(s). What this means is that the c module tag is used as an object in a UML model. In the code base there is no CFacade object, it's just a graphical representation for use in UML diagrams to better support cross-platform and cross-language programming.

### 1.9.d The Assembly Line Boundary

An assembly in Assembly programming and C/C++ is a set of source code compiled into a single contiguous block of executable code using the C or similar calling convention. There are only two primary types of assemblies, precompiled libraries and executable files. The rule in C++ for libraries and DLLs is that a precompiled library may not include any other precompiled libraries, but a executable file may incorporate multiple precompiled libraries. This is because of the way that C++ does name mangling and setups up the static memory.

## 1.9.e Precompiled headers

F2 software shall use C++ precompiled headers, the requirement being that they speed up the build process. The convention is to use the `stdafx.h` file, but a filename is not a framework so the name does not matter but the default is `stdafx.h`. F2 software provides the precompiled header file in the $ProjectDirectory/source file.

## 1.9.f Page, Major and Minor Seams

The Page-Major-Minor Seam Enumeration System is based upon a standard 8.5" by 11" sized sheet of paper with enough room for margins, a header, a paragraph, and a footer to allow for clean printing into Engineered Software Analysis and Software System Definitions either vertically or horizontally. Enumerated seams allow developers to peal back the layers of the code to the core so you can debug that seam in isolation with debug information that is customized for that seam.

Page and Major seams numbers are contiguous integers either in the range [0,9] or [00,99] enumerated in the order they are to be tested. If the index is range [0,9] the seam number will be a 2 digit number. If the index is range [00,99] the seam number will be a 4 digit number.  Most software will fit neatly in a single page with less than 11 pages and 11 major seams, but  minor seams may number in the hundreds. For this reason the minor seam is combined with the 2 or 4 digit Page-Major Seams Number. For example SEAM_12_345 is Page number 1 (the second page), Major Seam 2 (the third major seam.), and Minor seam 345 (the 346th minor seam.).

The smallest seam increment is the Minor Seam. A Minor Seam is defined as a group of one or more files that are decoupled from the minor seam above them, and those files have debug information specific to that minor seam.

The second largest seam increment is the Major Seam. A Major Seam is defined as a group of two or more Minor Seams that have one or more executable projects associated with them.

Namespaces and modules may be spread out across multiple seams. For instance, work on an module may start in SEAM_01_0 and SEAM_1 may have a working functioning executable program. On SEAM_02 the object then goes through one or more development iterations.

The largest seam increment currently defined by F2 is a Page Seam. A Page Seam is defined as a group of two or more major seams that fit neatly on single 8.5" by 11" sheet of paper; hence the name Page Seam.

Modules may appear on multiple seams and pages. For example, part of a module may be introduced in SEAM_01 and that module may also be developed upon in SEAM_02, then not developed upon in SEAM_03, but again developed upon in SEAM_04. When a previous seam has been changed, it may regress the Progress Seam number. The Project Progress Seam Number is the seam number is the highest seam number that has passed all of the unit tests.

Implementations that cannot fit their software on a single page of paper first must  perform a sanity check and determine if the design could be simplified and may set the size of their engineered software analysis to some paper size larger than 8.5" x 11" but must shrink the page to 8.5" x 11" and provide an online link to the full-sized Page-Seam Diagram.

### 1.9.g Macros



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

## 1.9.h Global and Module Configuration

Each source code module shall contain a `config.h`, the config file, and `global.h`, the global file it the `$ModuleRoot`. There is no `config.h` file for the primary SDK because the assembly is configured in the `stdafx.h` file. Instead implementations shall designate the first include module as the SDK core.

The `global.h` file shall contain `#include` references for all of the module's public facing API the entire module may be imported by importing the `global.h` file. The `config.h` file contains all of the modules dependencies and configuration information. In the target program there is a `assembly.h` file that gets `#include` inline from each module's `config.h` file and is used to configure the compiled assembly.

## 1.9.i Build-time Optimizations

In C++ there are some language features that are very powerful, but slow down the compiler a lot.

### 1.9.j Unique Translation Unit Names

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

### 1.9.k Use of Precompiled header

The use of precompiled headers dramatically speeds up the compilation of C++ software. F2 Compliant software shall have a precompiled header that contains the MAJOR_SEAM, MINOR_SEAM, and PAGE_SEAM macros.

### 1.9.l Framework for C++ Templates

This rule is different than the style guide for templates because the style guide dictates how the code will be formatted, but the rules in this section dictates the structure of how the templates are programmed.

C++ Templates can not be precompiled into header files and may create duplicate copies of static data in the library assembly and the executable assembly. The only way to get around this is to not put templates the precompiled library header files. F2 Compliant Software may use templates, but shall provide a header file without templates that contains wrapper functions for instances of specialized templates.

### 1.9.m Highest-Seam Library

Once many libraries need to get compiled, the compile time of the application will significantly slow down. To combat this, Kabuki Toolkit is designed to be compiled in sequential enumerated seams where the highest value seam, meaning highest value page, major, and minor seam numbers, that passes the seam unit test is built as a `.lib` or `.a` file and linked to in the highest value seam that does not pass the unit test. The greatly reduces compile time and also helps debug assembly boundary issues.

## 1.10 Exercises

**1**.) Explore the Script repository and read the SCRIPT Specification RFC at https://github.com/kabuki-starship/script.

**Optional**.) Print out the `$script/docs/script_quick_reference.pdf` and laminate it for quick reference.

**2**.) Read the `$kabuki-toolkit/docs`:

**a**.) Work through the Quickstart Guide in `$kabuki-toolkit/docs/quickstart-guide.md.`

**3**.) Start your project:

**a**: Look through the `$kabuki-toolkit/projects` folder, open interesting projects, and build them.

**b**.) Choose a project to use as the starting point for your project, copy and paste it into your workspace, rename the project folder and files, and start hacking on your project.
