# [KabukiPress Cookbook](../readme.md)

## [Introduction](./readme.md)

### Modern Embedded-C++

Modern Embedded-C++ (ME-C++) is similar to Modern-C++ only there are some extra rules for dealing with memory constrained systems. Some of the most important characteristics of ME-C++ are:

1. Minimization of RAM and ROM use with the ability to scale up to desktop RAM and ROM usage. **✓**
1. Use of Virtual Machine design pattern to allow for easy porting to any hardware platform or OS. **✓**
1. Use of a detailed style guide with best practice and coding conventions. **✓**
1. Use of C++1x language features **where appropriate**. **✓**
1. Use of as much functionality at compile time as possible. **✓**
1. Use of a standardized set of general purpose data structures such as STL or ASCII Data Types. **✓**
1. Use of Issue Driven Development or competing best practice in order to remain agile and the master branch with Continuous Integration Testing. **/**
1. The code uses *Stack Programming* techniques to minimizes the use of dynamic memory by keeping as much data as possible in the CPU registers and on the hardware-assisted stack. **✓**
1. Smart pointers are used when dynamic memory is required unless performance is critical. **✓**
1. API documents are automatically generated using metadata tags such as Doxygen. **✓**
1. Code uses structured programming with the exception of performance critical applications. **✓**
1. Libraries may integrate `Antiquated-C++`, meaning `C++` code that is not modern, but `Antiquated-C++` is wrapped with `Modern-C++ Adapters` and are segregated from the `Modern-C++` code and marked. **✓**

**[<< Previous Section:Summary](./summary.md) | [Next Section:Script2 >>](../script2/readme.md)**

## License

Copyright 2018-9 (C) [Kabuki Starship](https://kabukistarship.com); all rights reserved (R).

This is an open-source document, the Document, that was written by and contains intellectual property. The Document consists of documents, files, source code, technology design files, art, and other content contained this file, folder and markdown.cookbook GitHub repository located at <https://github.com/kabuki-starship/kabuki.press.cookbook>, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository as an Issue ticket to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Your Name. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
