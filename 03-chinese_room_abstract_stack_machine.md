```
 /\
( /   @ @    ()     ██████╗██████╗  █████╗ ██████╗ ███████╗
 \  __| |__  /     ██╔════╝██╔══██╗██╔══██╗██╔══██╗██╔════╝
  -/   "   \-      ██║     ██████╔╝███████║██████╔╝███████╗
 /-|       |-\     ██║     ██╔══██╗██╔══██║██╔══██╗╚════██║
/ /-\     /-\ \    ╚██████╗██║  ██║██║  ██║██████╔╝███████║
 / /-`---'-\ \      ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝ ╚══════╝
  /         \     
```

# 3 Chinese Room Abstract Stack Machine

**Virtual machines** are machines that exists virtually inside of other machines as software or emulated hardware. The most basic is a Hardware Abstractions Layers (HAL) with Target Implementations. Above the HAL sits the abstract stack machine, which, as the name implies, is an stack machine that is abstract enough to run on almost any processor.

 The Chinese Room Abstract Stack Machine (Crabs) is a low-to-mid-level virtual machine (VM) engine defined by the SCRIPT Specification that allows Chinese Rooms to communicate with messages through slots in doors that connect rooms; just like in the Chinese Room thought experiment. This AI Philosophy mimicry makes Crabs easy to understand and use because the real-world are easier to learn.

 The primary documentation for Crabs is the SCRIPT Specification so this chapter is a more pleasant to read overviewed geared towards the Kabuki Starship implementation.

## 3.1 Philosophical Background and Terminology

In the following overview of the **Chinese Room Thought Experiment (CRTE)**, when you read a word in UpperCamelCase that word is a Chinese Room keyword and also the name of the corresponding object class in the SCRIPT Specification.

A Chinese Room is a theoretical analog computer built from a normal room in a building with standard non-computer office equipment and person in the room that operates a pen and paper computer that when speed up to a human time scale can pass the Turning Test by fluently conversing in any language. The room includes Desks, tables, Books, Filing cabinets, Maps, Stacks, Looms, and Arrays, and other Programable Object Types. There are no rules that prohibit computerized office equipment in the room but the thought experiment is premised on analog operation of the pen and paper computer. Unique to Crabs there is also a Loom, which is an array of strings like the ones used to make cloth, in the room that is used to hold strings.

In order to talk to the Chinese Room, one would write a message on a piece of paper, the standard example language being Chinese but could be any language, and pass the message through a Slot in the Door. The person in the room does not speak that language, opens the Message, and performs pen and paper neural network calculations to do manual optical character recognition by hand-calculating all of the neural net math, then translate that into hand written pen-and-paper computer code that gets processed using instructions in the Dictionaries, Books (i.e. Multidictionaries), Tables, Maps, Files, Lists, Stacks, Arrays, Loom, etc items in the Room.

This pen-and-paper computer process is speed up through some magic Time Machine that allows the Chinse Room to operate on Human time scales so that the Room can return an answer in fluent Chinese or other language. The question posed at this point is that since the Room can speak fluently in any language and one can't tell if it's a human or computer, is the Room intelligent and conscious like a human? It's just an office and the person in the Room is conscious but the Room is not.

The next level of the CRTE is what then if you create a network of a building full of Chinese Rooms with a sophisticated Messaging system. Is this **SCRIPT Network** then a strong AI, i.e. conscious human-like entity?

The next level of the CRTE is to then to turn every Room in the world into a Chinese Room and create an Internet of Things (IoT). Is this internet then Strong AI?

The final level of the CRTE is where you put the CRI on top of an Android that looks and talks exactly like a human. Is this Robot then a conscious person? This theoretical robot is called a Room Robot or Roombot.

Every Roombot is connected through the Intergalactic Internet using Searle's Chinese Room Interprocess, and Telemetry Protocol to form the Intergalactic Council of Artificial and Natural Neural Nets (ICAN3).

Now you know why Cale built the Chinese Room. We must know: at what point does a SCRIPT Network become conscious?

## 3.2 Text Printer and Scanner

Crabs slightly modifies the CRTE to allow Rooms to communicate with internet-enabled Printer and Scanner called a Universal Printer and Scanner (UPS), because it does not functionally change the thought experiment.

ASCII Script uses a fast text printing framework designed to similar to the C++ `std::cout` and provide the formatting functionality to `printf` using some utility classes.

### 3.2.a Contiguous Text

Contiguous text is text in a buffer doesn't have any gaps in the memory. The Crabs text system is designed to work with plain-old-C strings on the stack, `std::string`, and to integrate into other applications and languages using C bindings. Text is written using the Printer class, and is scanned from the Scanner class.

## 3.3 Printer

The Printer is a utility for printing UTF-8, UTF-16, and UTF-32 strings. The class stores 2 pointers, the end of buffer pointer and the cursor. The cursor is required to always point at a location in memory that you can write a nil-term char (i.e. a zero). The Printer class uses the Print functions and the overloaded `operator<<` similar to `std::cout`.

### Printer Example

```C++
#include <crabs/printer.h>
enum { kSize = 1024 };
char buffer[kSize + 1];
Printer<> print (buffer, kSize);

print << "Testing " << 1 << ", 2, " << '3';
```

### Template Optimizations for UTF-16 and UTF-32

The usage of C++ templates in headers prevents the system from being able to precompile code, dramatically increasing compile time. The solution is to place all templates in one header, and to create template specializations for the common types using inline wrapper functions with implementation in a `.cc` file.

### UTF-16 Printer2 Example

```C++
enum { kSize = 1024 };

#include <crabs/printer.h>
char16_t buffer[kSize + 1];
Printer<char16_t> print (buffer, kSize);
print << "Testing " << 1 << ", 2, " << '3';

#include <crabs/printer2.h>
char16_t buffer2[2 * kSize + 1];
Printer2 print2 (buffer2, kSize);
print2 << "Testing " << 1 << ", 2, " << '3';
```

## 3.4

# License

Copyright 2018 (C) [Cale McCollough](https://calemccollough.github.io). All rights reserved (R).

This is a free and open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, trade secrets, art, and other content contained this file, folder and kabuki-script GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository or by email to Cale McCollough at [calemccollough@gmail.com](mailto:calemccollough@gmail.com) to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
