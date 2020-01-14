# [KabukiPress Cookbook](../../)

## [Script2](../)

### Strings

[Section video tutorial](https://youtu.be/vxz4EX7TvCI)

String processing in Script2 is done with the Uniprinter, Uniscanner, and Auto-String. The Uniprinter, or Universal Printer, works similarly to a mix of the C++ `std::cout` and `printf` using operator overloading. An overload set of C functions and templated C++ functions are used to handle all of the Unicode character types correctly in C++ and a set of utility classes called Stringf are used to store formatting data on the stack & in machine registers.

#### Templated String Printer

The TSPrinter is a templated class for printing UTF-8, UTF-16, and UTF-32 strings. The class stores two pointers, the start and the stop of the buffer. The Start and Stop pointers can be thought of as the base pointer, or first character in the string, and the nil-termination character, or null-term char. 

***Example***

```C++
#include <script2/stringf.hpp>
using namespace _;
enum {
cCount = 512,
};
CHT str_a[cCount];
TSPrint<CHT>(str_a, cCount, kTesting123);

printer << "Testing " << 1 << << Centerf (", 2, ", 7) << Rightf ('3', 3)
    << Binaryf (123) << Hexf (45) << '\n' << Linef ('-', 10);
```

***Result***

```ASCII
Testing 1 , 2,    3 1111011 2D
----------
```

#### Auto-Strings

Fix me!

#### Uniprinter

The Uniprinter has a bunch of utility classes that allow data to be kept on the stack and to exploit the order of operations of the C++ operator overloads.

**[<< Previous Section: Testing.Summary](../testing/summary) | [Next Section: Script2 >>](../Script2™/)**

## License

Copyright 2018-20 © [Kabuki Starship™](https://kabukistarship.com).

This is an open-source document, the Document, that was written by and contains intellectual property. The Document consists of documents, files, source code, technology design files, art, and other content contained this file, folder and markdown.cookbook GitHub repository located at <https://github.com/kabuki-starship/kabuki.press.cookbook>, the Repository. The Document is subject to the terms of the Kabuki Strong Source-available License, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository as an Issue ticket to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Your Name. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
