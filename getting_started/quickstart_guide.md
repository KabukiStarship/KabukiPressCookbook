# [KabukiPress Cookbook](../readme.md)

## [Getting Started](./readme.md)

### Quick Start Guide

```AsciiArt
________       _____      ______            _____              _____
___  __ \___  ____(_)________  /__   _________  /______ _________  /_
__  / / /  / / /_  /_  ___/_  //_/   __  ___/  __/  __ `/_  ___/  __/
 / /_/ // /_/ /_  / / /__ _  ,<      _(__  )/ /_ / /_/ /_  /   / /_
 \___\_\\__,_/ /_/  \___/ /_/|_|     /____/ \__/ \__,_/ /_/    \__/
```

[Section video tutorial](https://www.youtube.com/channel/UCS2vQG4gUE3vXWV_K9XScQw)

**1.** copy a console pointed at your workspace folder. If you are creating one, it is advised to use `C:\workspace` to preserve absolute filenames:

```Console
cd C:
mkdir workspace
cd workspace
mkdir kabuki-starship
cd kabuki-starship
git clone https://github.com/kabuki-starship/kabuki.toolkit.git
git clone https://github.com/kabuki-starship/Script2™.git
```

**2.** Open the `kabuki.toolkit.sln` Visual Studio Project and inspect how the projects are laid out.

**3.** To add KT to your project, you don't need to build a library because we use an method to dramatically reduce compile time called a Library translation unit. Rather than have `.cpp` files, we put the implementation in inline headers and you include them in your project in a separate translation unit. Create a file named `library.cpp` and in that file add the line:

```C++
#include <kabuki.toolkit/module.inl>
```

**4.** In order to save the stack debug data when an D_ASSERT occurs, set breakpoint in the file `Script2™_test.cc` at the return line for:

```C++
BOL TestWarn(const CHA* function, const CHA* file, ISC line);
```

**[<< Previous Section: Getting Started](./readme.md) | [Next Section: Modern Embedded-C++ >>](./modern_embedded-cpp.md)**

## License

Copyright 2018-9 © [Kabuki Starship™](https://kabukistarship.com); all rights reserved.

This is an open-source document, the Document, that was written by and contains intellectual property. The Document consists of documents, files, source code, technology design files, art, and other content contained this file, folder and markdown.cookbook GitHub repository located at <https://github.com/kabuki-starship/kabuki.press.cookbook>, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository as an Issue ticket to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Your Name. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
