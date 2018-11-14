```
 _______ _              _______             _             _  
(_______) |            (_______)           (_)           | |
    _   | |__  _____    _  _  _ _____  ____ _  ____ _____| |
   | |  |  _ \| ___ |  | ||_|| (____ |/ _  | |/ ___|____ | |
   | |  | | | | ____|  | |   | / ___ ( (_| | ( (___/ ___ | |
   |_|  |_| |_|_____)  |_|   |_\_____|\___ |_|\____)_____|\_)
                                     (_____|                                
 /\
( /   @ @    ()     ██████╗██████╗  █████╗ ██████╗ ███████╗
 \  __| |__  /     ██╔════╝██╔══██╗██╔══██╗██╔══██╗██╔════╝
  -/   "   \-      ██║     ██████╔╝███████║██████╔╝███████╗
 /-|       |-\     ██║     ██╔══██╗██╔══██║██╔══██╗╚════██║
/ /-\     /-\ \    ╚██████╗██║  ██║██║  ██║██████╔╝███████║
 / /-`---'-\ \      ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝ ╚══════╝
  /         \     
```

# [3] Crabs

The easiest way to describe Crabs is that it's a generic stack machine that can work on either pen-and-paper or on a computer, and it uses the Automaton Standard Code for Information Interchange (ASCII) B-Sequences (BSQ) for input and output parameters and arguments. If you haven't already, it is highly recommended to read the ASCII Data Specification because the data types are used all over the place; the spec can be found at:

[https://github.com/kabuki-starship/script2/blob/master/docs/ascii_data_specification_rfc.md](https://github.com/kabuki-starship/script2/blob/master/docs/ascii_data_specification_rfc.md)

## [3.1] ASCII Objects and the ASCII Factory

Memory handling in Crabs is abstracted away using the ASCII Factory, which is a single C-function pointer with the prototype:

```C++
/* ASCII Factory manages memory for ASCII Objects.
@return Nil upon failure or if no return buffer is expected, or a pointer to a
word-aligned buffer upon success.
@param begin    Pointer to an existing buffer or nil to create a buffer.
@param function A jump table function index.
@param arg      Pointer to the ASCII Factory argument. */
typedef UIW* (*AsciiFactory)(UIW* begin, CHW function, void* ptr);

namespace _ {
/* ASCII OBJ with programmable ASCII Factory. */
struct CObject {
  UIW* begin;            //< Pointer to the contiguous ASCII OBJ.
  AsciiFactory factory;  //< ASCII OBJ Factory function pointer.
};
}
```

One small point of confusion to address here is that a UIW is a uintptr_t (AKA a word-sized unsigned integer), but a CHW is a wchar_t (AKA a Wide Char).

All ASCII Objects are contiguous which allows the size of the object to be loaded by casting the begin pointer to 8, 16 32, or 64-bit unsigned integer and loading the address. The method to do this is with the TObject class. One important thing to understand about C++ templates are that they always get complied into each assembly, so this will ensure the correct assembly manages the memory. The ASCII Factory is designed to allow for automatic grown from the stack to the heap.

# Stack-to-Heap Auto-growth Example

```C++
int main () {
  enum { kSize = 256 };
  char buffer[kSize];
  TString utf (buffer, kSize, TCOutAuto<>);

  for (int i = 0; i < 1000; ++i)
   utf.Print("Foo ");
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
#include <kabuki/crabs/tutf.h>
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

Copyright 2014-2018 (C) [Cale McCollough](https://calemccollough.github.io). All rights reserved (R).

This is a free and open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, trade secrets, art, and other content contained this file, folder and engineering-invention-startups GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository or by email to Cale McCollough at [calemccollough@gmail.com](mailto:calemccollough@gmail.com) to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
