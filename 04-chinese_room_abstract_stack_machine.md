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

# 2 Chinese Room Abstract Stack Machine

**Virtual machines** are machines that exists virtually inside of other machines as software or emulated hardware. The most basic is a Hardware Abstractions Layers (HAL) with Target Implementations. Above the HAL sits the abstract stack machine, which, as the name implies, is an stack machine that is abstract enough to run on almost any processor.

 The Chinese Room Abstract Stack Machine (Crabs) is a virtual machine (VM) engine defined by the SCRIPT Specification that allows Chinese Rooms to communicate with messages through slots in doors that connect rooms; just like in the Chinese Room thought experiment.

Kabuki Crabs is used to create the **F2 Foundational Framework**, or **F2**, which is the core application framework used through



## 2.2 Text Printer and Scanner

Kabuki Script uses a fast text printing framework designed to similar to the C++ `std::cout` and provide some of the functionality to `printf`. The API works with contiguous strings and ring-buffer Slots.

### 2.2.a Contiguous Text

Contiguous text is text in a buffer doesn't have any gaps in the memory. The Crabs text system is designed to work with plain-old-C strings on the stack, `std::string`, and to integrate into other applications and languages using C bindings. Text is written using the Printer class, and is scanned from the Scanner class.

## 2.4 Printer

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

## 2.

# License

Copyright 2018 (C) [Cale McCollough](https://calemccollough.github.io). All rights reserved (R).

This is a free and open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, trade secrets, art, and other content contained this file, folder and kabuki-script GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository or by email to Cale McCollough at [calemccollough@gmail.com](mailto:calemccollough@gmail.com) to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
