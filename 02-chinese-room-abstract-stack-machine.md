# 3 Chinese Room Abstract Stack Machine

The Chinese Room Abstract Stack Machine (Crabs) is a virtual machine (VM) engine for creating VMs defined in the SCRIPT Specification that allows rooms to communicate with messages. Crabs works using an Object stack utilizing a single-function interface modeled after the A=A*B Group Automata Theorem.

## 4.2 Text Printer and Scanner

Kabuki Script uses a fast text printing framework designed to similar to the C++ std::cout and provide some of the functionality to printf. The API works with contiguous strings and ring-buffer Slots.

### Contiguous Text

Contiguous text is text in a buffer doesn't have any gaps in the memory. The Crabs text system is designed to work with plain-old-C strings on the stack, std::string, and to integrate into other applications and languages using C bindings. Text is written using the Printer class, and is scanned from the Scanner class.

## Slot

In the Chinese Room thought experiment, you write a message on a piece of paper and pass it through the slot in the door. The person in the room then performs a manual computer with pen and paper and misc office supplies and writes the computed result on a piece of paper and passes it back through the door.

## Printer

The Printer class stores 2 pointers, the end of buffer pointer and the cursor. The cursor is required to always point at a location in memory that you can write a nil-term char (i.e. a zero). The Printer class uses the Print functions and the overloaded `operator<<` similar to std::cout. The Print functions do not print nil-term char and you are responsible to ensure the proper delimiter is placed. Ts system allows for spaces and strings to be written without writing a delimiter every time you want to write to a string.

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

### Scanner



---

# License

Copyright 2018 (C) [Cale McCollough](https://calemccollough.github.io). All rights reserved (R).

This is a free and open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, trade secrets, art, and other content contained this file, folder and kabuki-script GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository or by email to Cale McCollough at [calemccollough@gmail.com](mailto:calemccollough@gmail.com) to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
