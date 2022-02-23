# [KabukiPress Cookbook](../../ReadMe.md)

## [Script2](../ReadMe.md)

### String Processing

[Section video tutorial](https://www.youtube.com/channel/UCS2vQG4gUE3vXWV_K9XScQw)

#### Uniprinter

KT uses a ultra-fast text printing framework designed to work similar to the C++ `std::cout` and provide the formatting functionality to `printf` using some utility classes. The most noticeable difference between the operation of the two are that the Uniprinter uses a pointer to the first and last Unicode character in a buffer.

##### Contiguous Text

Contiguous text is text in a buffer doesn't have any gaps in the memory. The Crabs text system is designed to work with plain-old-C strings on the stack, `std::string`, and to integrate into other applications and languages using C bindings. Text is written using the Printer class, and is scanned from the Scanner class.

##### Printer

The Printer is a utility for printing UTF-8, UTF-16, and UTF-32 strings. The class stores 2 pointers, the end of buffer pointer and the cursor. The cursor is required to always point at a location in memory that you can write a nil-term char (i.e. a zero). The Printer class uses the Print functions and the overloaded `operator<<` similar to `std::cout`.

##### Printer Example

```C++
#include <script2/>
enum { kSize = 1024 };
char buffer[kSize + 1];
UTF8 utf (buffer, kSize);

utf << "Testing " << 1 << << Centerf (", 2, ", 7) << Rightf ('3', 3)
    << Binaryf (123) << Hexf (45) << '\n' << Linef ('-', 10);
```

***Result***

```ASCII
Testing 1 , 2,    3 1111011 2D
----------
```

##### Template Optimizations for UTF-16 and UTF-32

The usage of C++ templates in headers prevents the system from being able to precompile code, dramatically increasing compile time. The solution is to place all templates in one header, and to create template specializations for the common types using inline wrapper functions with implementation in a `.cc` file.

***UTF-16 Printer2 Example***

```C++
enum { kSize = 1024 };

#include <crabs/uniprinter.hpp>
char16_t buffer[kSize + 1];
Printer<char16_t> print (buffer, kSize);
print << "Testing " << 1 << ", 2, " << '3';

#include <crabs/str2.h>
char16_t buffer2[2 * kSize + 1];
StringB print2 (buffer2, kSize);
print2 << "Testing " << 1 << ", 2, " << '3';
```

**[<< Previous Section: Summary](../Testing/Summary.md) | [Next Section: Script2 >>](../Script2.md)**

## License

Copyright 2014-22 © [Cale McCollough](https://cookingwithcale.org).

This is an open-source document, the Document, that was written by and contains intellectual property. The Document consists of documents, files, source code, technology design files, art, and other content contained this file, folder and markdown.cookbook GitHub repository located at <https://github.com/KabukiStarship/KabukiPressCookbook>, the Repository. The Document is subject to the terms of the Kabuki Strong Source-available License, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository as an Issue ticket to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
