# [KabukiPress Cookbook](../)

## [Introduction](./)

### Modern Embedded-C++

[Section video tutorial](https://www.youtube.com/channel/UCS2vQG4gUE3vXWV_K9XScQw)

Modern Embedded-C++ (ME-C++) is similar to Modern-C++ only there are some extra rules for dealing with memory constrained systems. Some of the most important characteristics of ME-C++ are:

1. Minimization of RAM and ROM use with the ability to scale up to desktop RAM and ROM usage using *Stack Programming* techniques to keep as much data as possible in the CPU registers and on the hardware-assisted stack. **✓**
1. Use of Virtual Machine design pattern to allow for easy porting to any hardware platform or OS. **✓**
1. Use of a detailed style guide with best practice and coding conventions. **✓**
1. Use of C++1x language features **where appropriate**. **✓**
1. Use of as much functionality at compile time as possible. **✓**
1. Use of a standardized set of general purpose data structures such as STL or ASCII Data Types. **✓**
1. Use of Issue Driven Development or competing best practice in order to remain agile using Continuous Integration Testing. **✓**
1. Smart pointers are used when dynamic memory is required unless performance is critical. **✓**
1. Use of minimized auto-generated API documentation using metadata tags such as Doxygen. **✓**
1. Code uses structured programming without Software exceptions with the exception of performance critical applications. **✓**
1. Libraries may integrate `Antiquated-C++`, meaning `C++` code that is not modern, but `Antiquated-C++` is wrapped with `Modern-C++ Adapters` and are segregated from the `Modern-C++` code and marked. **✓**

**[<< Previous Section:Summary](./summary) | [Next Section:Script2™ >>](../Script2™/)**

## License

Copyright 2014-21 © [Cale McCollough](https://cookingwithcale.org).

This source code form is an open-source document, the Writings and Discoveries, that was written by and contains intellectual property. The Writings and Discoveries consist of documents, files, source code, technology design files, art, trademarks, and other content contained this file, folder and the GitHub repository located at <https://github.com/KabukiStarship/KabukiPressCookbook>. The Writings and Discoveries are published under the Kabuki Strong Source-available License, the License, which is a non-commercial open-source license and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Writings and Discoveries so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository as an Issue ticket to become part of the Writings and Discoveries. You may not sell the Writings and Discoveries or otherwise profit from derivative works created from the Writings and Discoveries without the expressed written permission of the copyright holder. Unless required by applicable law or agreed to in writing, the Writings and Discoveries distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
