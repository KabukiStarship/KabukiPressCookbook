```
  /\
 ( /   @ @    ()   _  __     _           _    _   _____           _ _    _ _   
  \\ __| |__  /   | |/ /__ _| |__  _   _| | _(_) |_   _|__   ___ | | | _(_) |_
   \/   "   \/    | ' // _` | '_ \| | | | |/ / |   | |/ _ \ / _ \| | |/ / | __|
  /-|       |-\   | . \ (_| | |_) | |_| |   <| |   | | (_) | (_) | |   <| | |_
 / /-\     /-\ \  |_|\_\__,_|_.__/ \__,_|_|\_\_|   |_|\___/ \___/|_|_|\_\_|\__|
  / /-`---'-\ \  
   /         \                     ♫♪.ılılıll|̲̅̅●̲̅̅|̲̅̅=̲̅̅|̲̅̅●̲̅̅|llılılı.♫♪

                 ___                \     \                    \    
               .'   \   __.    __.  |   , | ___    __.    __.  |   ,
               |      .'   \ .'   \ |  /  |/   \ .'   \ .'   \ |  /
               |      |    | |    | |-<   |    ` |    | |    | |-<  
                `.__,  `._.'  `._.' /  \_ `___,'  `._.'  `._.' /  \_
```

# [1] Overview

This book is about the Kabuki Toolkit Modern-C++ Firmware-to-Software Development Kit (**F2SDK**) and tool set, a Software-defined Networking Protocol (SDNP) called the Serial Chinese Room, Interprocess, and Telemetry (**SCRIPT**) Protocol that runs SCRIPT Scripts (**Script2**) on the world-famous Chinese Room Abstract Stack Machine (**Crabs**).

The audience of this book is intermediate to expert programmers, though beginning C++ programmers may still find the book useful and will teach you Modern Embedded-C++ the right way. You would want to read this book if you're trying to learn Kabuki Toolkit or Script2, or if you are interested on how to build Modern C++ SDKs.

This overview chapter will briefly explain the:

* Chinese Room AI Thought Experiment
* Kabuki Theater Theory of Consciousness.
* SCRIPT Specification.
* Kabuki Toolkit Firmware-to-Software Development Kit.

## [1.1] Content Table

1. *Overview*
    1. [Content Table](https://github.com/kabuki-starship/script-and-kabuki-toolkit-cookbook/blob/master/01-overview.md)
    2. [License](#12-license)
    3. [Preface](#13-preface)
    4. [Mission and Vision](#14-mission-and-vision)
    5. [SCRIPT Specification](#15-script-specification)
    6. [Kabuki Toolkit](#16-kabuki-toolkit)
    7. [Exercises](#17-exercises)
	4. [Mission and Vision](#14-mission-and-vision)
2. [Seam Trees](02-seam-trees.md)
3. [The Magical Crabs](03-the-magical-crabs.md)
  1. [ASCII Objects and the ASCII Factory](03-the-magical-crabs.md#31-ascii-objects-and-the-ascii-factory)
  2. [Universal Text Formatter](03-the-magical-crabs.md#32-universal-text-formatter)

## [1.2] License

Copyright 2018 (C) [Cale McCollough](https://calemccollough.github.io). All rights reserved (R).

This is a free and open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, art, and other content contained this file, folder and kabuki-script GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository or by email to Cale McCollough at [calemccollough@gmail.com](mailto:calemccollough@gmail.com) to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

## [1.3] Preface

I'm writing this book because it's really hard to get good information about how to make a good SDK. You've got to go to engineering school and/or know a lot of really low-level stuff.

This whole project started in 2014 when a doctor friend of mine suckered me into making a DNA extraction machine he had a patent on that using a strong electromagnet, which he amateurishly chose 30A of current for which is ridiculous, to stir and head metal beads. He didn't exactly know how it was supposed to work and it was pretty laughable.

I needed to be able to do PWM on the magnets in real-time, which is a very intensive task on a small microcontroller over a serial line. I also needed to be able to shut the magnets off immediately to prevent killing my doctor friend with the 30A electromagnets. This was when I invented Script. Script had to be fast, lean, reliable, and, above all else, safe.

It took many years of tedious debugging and non-stop rework to get Script to a state of perfection. I learned a lot from this process and during the process I got into Test-driven development, which then helped me develop my own hybrid system called Minmax Driven Development, which is a combination of all of the N-Drive Development practices combined with the Minmax artificial intelligence theory.

 For more information about Minmax Driven Development please read my book [Engineering Invention Startups](https://github.com/CaleMcCollough/engineering-invention-startups/master/blob/01-Overview) #WorkInProgress. The essence of the theory behind Driving Development to mix a bunch of N-Driven Development processes together to minimize time to market by minimizing rework and maximizing time spent in the flow state using Rapid Documentation in Markdown. In order to manage all of these N-Driven processes we then use the Minmax algorithm to minimize the cost and maximize the reward.

## [1.4] Mission and Vision

The mission of this book is to teach people how to make technology with ASCII Script and Kabuki Toolkit using modern C++ practices, and get users up to speed as quickly as possible. The vision of this book is to provide a free Markdown version of the book to all, regardless of ability to pay, and earn money by selling paper books because paper books are awesome and teaching classes.

The vision of this book is to provide enough projects, code snippets, and explanations to inspire the reader to innovate and bring their product to market as soon as possible.

This book is also goes with the book by Cale McCollough entitled the Minmax Startup: Engineering Invention Startups using AI. Minmax Startup is a open source book markdown book with papers copies for purchase about how to invent, start, and run high tech startups using modern best practices with an AI twist. The mission in regards to Minmax Startup is to provide all people, regardless of ability to pay, with the educational resources they need to come up and share the bounties of this beautiful Earth and technology and entrepreneurial revolution. The vision is that people will actually buy paper copies of the book because paper books are awesome, not to make someone else wealthy while we are poor.

## [1.5] Philosophical Background

The bedrock of Scripts and Kabuki Toolkit are AI philosophy concepts of the Chinese Room and Kabuki Theater theory of consciousness. Having some knowledge of these theories are essential for continuing in AI.

### [1.5.a] Chinese Room Thought Experiment

In the following overview of the **Chinese Room Thought Experiment (CRTE)**, when you read a word in UpperCamelCase that word is a Chinese Room keyword and also the name of the corresponding object class in the SCRIPT Specification.

A Chinese Room is a theoretical analog computer built from a normal room in a building with standard non-computer office equipment and person in the room that operates a pen and paper computer that when speed up to a human time scale can pass the Turning Test by fluently conversing in any language. The room includes Desks, tables, Books, Filing cabinets, Maps, Stacks, Looms, and Arrays, and other Programmable Object Types. There are no rules that prohibit computerized office equipment in the room but the thought experiment is premised on analog operation of the pen and paper computer. Unique to Crabs there is also a Loom, which is an array of strings like the ones used to make cloth, in the room that is used to hold strings.

In order to talk to the Chinese Room, one would write a message on a piece of paper, the standard example language being Chinese but could be any language, and pass the message through a Slot in the Door. The person in the room does not speak that language, opens the Message, and performs pen and paper neural network calculations to do manual optical character recognition by hand-calculating all of the neural net math, then translate that into hand written pen-and-paper computer code that gets processed using instructions in the Dictionaries, Books (i.e. Multi-dictionaries), Tables, Maps, Files, Lists, Stacks, Arrays, Loom, etc items in the Room.

This pen-and-paper computer process is speed up through some magic Time Machine that allows the Chinese Room to operate on Human time scales so that the Room can return an answer in fluent Chinese or other language. The question posed at this point is that since the Room can speak fluently in any language and one can't tell if it's a human or computer, is the Room intelligent and conscious like a human? It's just an office and the person in the Room is conscious but the Room is not.

The next level of the CRTE is what then if you create a network of a building full of Chinese Rooms with a sophisticated Messaging system. Is this **SCRIPT Network** then a strong AI, i.e. conscious human-like entity?

The next level of the CRTE is to then to turn every Room in the world into a Chinese Room and create an Internet of Things (IoT). Is this internet then Strong AI?

The final level of the CRTE is where you put the CRI on top of an Android that looks and talks exactly like a human. Is this Robot then a conscious person? This theoretical robot is called a Room Robot or Roombot.

Every Roombot is connected through the Internet using Serial Chinese Room Interprocess, and Telemetry Protocol to form the Intergalactic Council of Artificial and Natural Neural Nets (ICAN3).

Now you know why Cale built the Chinese Room; because we must know: at what point does a SCRIPT Network become conscious?

### [1.5.b] Kabuki Theater

Kabuki Toolkit is named after a famous artificial intelligence theory of consciousness called the Kabuki Theater Model of Consciousness. The Kabuki Theater concept is that our lucid consciousness is like viewing a Kabuki Theater in person; each actor on stage close up looks rather simple and imperfect, but when you put all of the actors and props on stage and place the viewer in a dark stage with stage lights focused on tiny portions of the stage in a controlled manner, it creates a Gestalt perception of consciousness where the whole is greater than the sum of the parts. On stage there are so many interesting things to look at that are far enough away you can't see their real-life imperfections, and it creates an illusion of lucid consciousness from your mind bouncing around all of the trippy stage props resulting in a saturation of the mind's short-term memory that tricks the mind into thinking it is a fluid experience.

## [1.6] SCRIPT Specification

Searle's Chinese Room, Interprocess, and Telemetry (SCRIPT) Specification, or Script for short, is a definition for a family of technologies based of the Chinese Room Thought Experiment. Script is useful for creating all kinds of apps, games, operating systems, consumer electronics, computers, etc with. Script was designed from scratch with a Sandwich Development Method to clean up and minimize the amount of code required to create apps as well as the memory and overhead processing using modern C++1x with cross-language bindings. Script specifies:

* ASCII Data Types
* Universal Polar Addressing
* Crabs and SCRIPT Protocol

### [1.6.b] ASCII Data Specification

The Automaton Standard Code for information Interchange (ASCII) Data Types are a set of POD and complex data structures that can define most commonly-used computerized data. ASCII Data Types support all of the C++ data types, UTF-8, UTF-16, and MSB Variant Encoding, 8, 16, 32, 64, 128, 256, 512, 1024, 1024, 4096, and 4096, and 8192-bit signed and unsigned integers, 16, 32, 64, and 128-bit floating-point numbers, and a set of map data structures that use contiguous memory. The use of contiguous memory is very useful for interprocess communication and network apps. The data structures work as inter-process pointers that allows multiple processors to communicate and to perform reflections.

### [1.6.c] Universal Addressing Specification

Universal Polar Addressing, the Telemetry Searle's Chinese Room, Interprocess, and **Telemetry** Protocol, is a form of GPS coordinates that uses latitude and longitude as well as height above or below the earth's surface convey Telemetry data and to route ultra-high-speed internet signals.

### [1.6.d] SCRIPT Protocol Specification

The SCRIPT Protocol is a software-defined networking protocol (SDNP) based on the Chinese Room that supports both byte-encoded messages and human-readable text scripts. SDNP have the unique property that the languages may be swapped out dynamically at run-time and multiple language may coexists with each other in a single virtual machine. This is performed using the Chinese Room Abstract Stack Machine (Crabs), also called the Magic Crabs.

Crabs is a Virtual Machine Framework that uses some simple rules for how to detecting and handling keys, function parameters and arguments, and erroneous data and interpreting byte streams. Crabs is built for raw speed using modern C++ stack programming. Stack programming is a technique where as much data is placed on the stack as is possible and appropriate, and functions are optimized to minimize the number of register pushes and pops associated with function calls by taking advantage of how the C and C++ compiler handles the stack.

ASCII Script is the reference Script API. ASCII Script is responsible for dictating the SCRIPT Protocol SDNP features such as handling keys, function parameters and arguments, and erroneous data. When feature is introduced to the SCRIPT Protocol, the feature must have a defined ASCII Script implementation. This does not mean that is the only implementation, only that it is the reference implementation. Feel free to make as many implementations as you would like; gold stars going to all who get AI to write it's own implementation.

## [1.7] `Modern Embedded-C++`

`Modern Embedded-C++` isn't just a buzz-word, it's a way of life. `Modern C++` means many things, but arguably most importantly that:

1.  A detailed best practice style guide and coding conventions are used. **✓**
2.  The code uses C++1x language features **where appropriate**. **✓**
3.  The code performs as much functionality at compile time as possible. **✓**
4.  The code uses a standardized set of general purpose data structures such as std or crabs. **✓**
6.  Code repositories use Issue Driven Development or competing best practice in order to remain agile and the master branch with Continuous Integration Testing. **/**
7.  The code uses *Stack Programming* techniques to minimizes the use of dynamic memory by keeping as much data as possible in the CPU registers and on the hardware-assisted stack. **✓**
8.  Smart pointers are used when dynamic memory is required unless performance is critical. **✓**
10. Primary SDK is programed with cross-platform with cross-language bindings. **/**
11. API documents are automatically generated using metadata tags such as Doxygen. **✓**
12. Code uses structured programming with the exception of performance critical applications. **✓**
13. Libraries may integrate `Antiquated-C++`, meaning `C++` code that is not modern, but `Antiquated-C++` is wrapped with `Modern-C++ Adapters` and are segregated from the `Modern-C++` code and marked. **/**

## [1.8] Kabuki Toolkit

Kabuki Toolkit is a `Modern C++` `Firmware-to-Software Development Kit` (`F2SDK`), meaning it can be used to create anything from firmware to software. `Modern C++` means that it is written is written using C++1x language features and uses modern best practices. The benefit of this design choice is that it is faster and easier (and most importantly cheaper) to create connected devices using one high quality unified development kit than it is to learn multiple APIs that are all formatted in different style guides and create an anarchy of design choices.

KT leverages an automated build tool (still in the works) called the Sloth that automates the importing and updating of third-party libraries. The tool flattens source code hierarchy, minimize the number of directories, refactor namespaces into generics, and reformat all of the code into to a single style guide.

KT at it's core is the reference implementation of ASCII Script. KT then builds on premium open-source C and C++ SDKs, and wraps them with ASCII Script. If a better underlying implementation is found and the community agrees to upgrade, then in that module will be replaced with a better wheel; the goal being to minimize the number of wheels being invented and maximize revenue from selling tires and hubcaps for a minimum cost.

### [1.8.a] Kabuki Toolkit Modules

#### SCRIPT Script

SCRIPT Script (Script2) The Chinese Room Abstract Stack Machine (Crabs) is a lightweight Embedded-C++ application framework for creating virtual machines. Crabs is highly configurable and uses statically allocated cache-aligned memory with optional dynamic memory wrapper classes and contiguous memory data structures for **BLAZING** fast performance with a minimal RAM footprint. Crabs has the unique property that it works identically on 8/16, 32, and 64-bit systems.

#### Firmware Toolkit

The firmware toolkit contains the Unicontroller, a powerful general purpose controller for audio, midi, DMX lights, ASCII Script, and more. Unicontroller makes creating light controllers and MIDI and DMX controllers easy using Crabs.

#### Audio Library

The audio library provides cross-platform audio using OpenAL-Soft and PortAudio, with DSP and audio effects is provided by Maximilian.

#### Application framework

The application framework provides an operating system abstraction layer for Crabs for users to interact with stuff like application windows and system tray applications.

#### Data and Logging Library

Data and logging provide additional commonly used data structures not provided by the ASCII Data Types.

#### Human-machine Interface

The Human-Machine Interface (HMI) library provides classes for interfacing humans with machines.

#### Identification Library

The Identification Library contains a contact list and tools to handle users in multiuser systems.

#### Graphics library

The Graphics Library is based on Cairo ([https://www.cairographics.org](https://www.cairographics.org)) , a industry standard `C` vector graphics API used in Android, Chrome, Firefox, and hundreds of other software applications, and PLplot, a robust and powerful math plotting library in `C`.



#### Graphical User Interface

The Graphical User Interface (GUI) Library currently does not exist

#### Math Library

The Math library contains tools for compile-time and run-time math, and for performing distributed scientific processing using Script.

#### MIDI Library

The MIDI Library provides a standard set of MIDI drivers and tools built on RtMidi and mbed.

#### Projects, Tasks, and Scheduling Library

Projects, Tasks, and Scheduling Library contains tools for creating project trees and scheduling tasks. The library provides some Script classes for interfacing with revision control systems via Console Scripts.

#### Store and Inventory Library

The Store and Inventory Library contains a few classes for creating virtual inventories and assigning prices to items.

## [1.9] Script2 C++ Style Guide

The Script2 C++ Style Guide is a modified version of the Google C++ Guide that can be found at:

[https://github.com/kabuki-starship/script2/tree/master/docs/style_guide/script_style_guide.md
](https://github.com/kabuki-starship/script2/tree/master/docs/style_guide/script_style_guide.md
)

Major differences between the Google and Script2 C++ Style Guides are:

* Allowance of all uppercase public member names.
* Doxygen comment style guide.
* @todo Update Google C++ Style Guide vs Script2 C++ Style Guide difference list.

## [1.10] Hungarian Notation UML Templates

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

## [1.11] C Structs and CFacade

C is not UML compliant because it is not object oriented. F2 incorporates C into UML using CFacade(s) What this means is that the c module tag is used as an object in a UML model. In the code base there is no CFacade object, it's just a graphical representation for use in UML diagrams to better support cross-platform and cross-language programming.

In order to distinguish between a C-ABI struct and a C++ object file, the C prefix is added to every C struct, but C++ objects to not use this convention, which helps distinguish between C and C++ functionality.

## [1.12] The Assembly Line Boundary

An assembly in Assembly programming and C/C++ is a set of source code compiled into a single contiguous block of executable code using the C or similar calling convention. There are only two primary types of assemblies, precompiled libraries and executable files. The rule in C++ for libraries and DLLs is that a precompiled library may not include any other precompiled libraries, but a executable file may incorporate multiple precompiled libraries. This is because of the way that C++ does name mangling and setups up the static memory.

## [1.13] Exercises

**1**.) Explore the Script repository and read the SCRIPT Specification RFC at https://github.com/kabuki-starship/script.

**Optional**.) Print out the `$script/docs/script_quick_reference.pdf` and laminate it for quick reference.

**2**.) Read the `$kabuki-toolkit/docs`:

**a**.) Work through the Quickstart Guide in `$kabuki-toolkit/docs/quickstart-guide.md.`

**3**.) Start your project:

**a**: Look through the `$kabuki-toolkit/projects` folder, open interesting projects, and build them.

**b**.) Choose a project to use as the starting point for your project, copy and paste it into your workspace, rename the project folder and files, and start hacking on your project.

**|** [Seam Trees >>](02-seam-trees.md)

## License

Copyright 2014-2018 (C) [Cale McCollough](https://calemccollough.github.io). All rights reserved (R).

This is a free and open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, trade secrets, art, and other content contained this file, folder and engineering-invention-startups GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository or by email to Cale McCollough at [calemccollough@gmail.com](mailto:calemccollough@gmail.com) to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
