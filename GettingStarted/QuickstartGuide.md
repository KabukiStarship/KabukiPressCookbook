# [KabukiPress Cookbook](../ReadMe.md)

## [Getting Started](./ReadMe.md)

### Quick Start Guide

```AsciiArt
________       _____      ______            _____              _____
___  __ \___  ____(_)________  /__   _________  /______ _________  /_
__  / / /  / / /_  /_  ___/_  //_/   __  ___/  __/  __ `/_  ___/  __/
 / /_/ // /_/ /_  / / /__ _  ,<      _(__  )/ /_ / /_/ /_  /   / /_
 \___\_\\__,_/ /_/  \___/ /_/|_|     /____/ \__/ \__,_/ /_/    \__/
```

[Section video tutorial](https://www.youtube.com/channel/UCS2vQG4gUE3vXWV_K9XScQw)

**1** Open a console pointed at your workspace folder. If you are creating one, it is advised to use `C:\Workspace` to preserve absolute filenames:

**1a** If you don't care about using a little bit more disk space, the easiest way is to clone the entire Kabuki Starship open-source workspace.

```BASH
git clone --recursive https://github.com/KabukiStarship/KabukiStarship.git
```

**1.B** If you're low on disk space the other option is to only clone the KabukiPress repos.

```BASH
git clone https://github.com/KabukiStarship/KabukiStarship.git
cd KabukiStarship
git clone https://github.com/KabukiStarship/Script2.git
git clone https://github.com/KabukiStarship/KabukiToolkit.git
git clone https://github.com/KabukiStarship/KabukiPress.git
```

**2.** Clone the Script2 Bootstrap:

```BASH
git clone https://github.com/KabukiPackages/Script2Bootstrap
```

**3.** Open the `__Script2.Bootstrap.sln` Visual Studio Solution file. If you do not already have Visual Studio installed you can download it for free at <https://visualstudio.com>.

**4.** To add KT to your project, you don't need to build a library because we use a method to dramatically reduce compile time called a Library translation unit. Rather than have `.cpp` files, we put the implementation in inline headers and you include them in your project in a separate translation unit. The dedicates a single CPU core to compiling each library. Create a file named `library.cpp` and in that file add the line:

```C++
#include <KabukiToolkit/_Module.inl>
```

**5.** In order to save the stack debug data when a D_ASSERT (Debug assert) occurs, set a breakpoint in the file `<Script2/Test.inl>` at the return line for:

```C++
BOL TestWarn(const CHA* function, const CHA* file, ISC line);
```

**6.** Compile the bootstrap and run, and read the following chapters for any unanswered questions.

**[<< Previous Section: Getting Started Overview](./ReadMe.md) | [Next Section: Embedded-C++ >>](./EmbeddedCPP.md)**

## License

Copyright 2014-22 © [Cale McCollough](https://cookingwithcale.org).

This source code form is an open-source document, the Writings and Discoveries, that was written by and contains intellectual property. The Writings and Discoveries consist of documents, files, source code, technology design files, art, trademarks, and other content contained this file, folder and the GitHub repository located at <https://github.com/KabukiStarship/KabukiPressCookbook>. The Writings and Discoveries are published under the Kabuki Strong Source-available License, the License, which is a non-commercial open-source license and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Writings and Discoveries so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository as an Issue ticket to become part of the Writings and Discoveries. You may not sell the Writings and Discoveries or otherwise profit from derivative works created from the Writings and Discoveries without the expressed written permission of the copyright holder. Unless required by applicable law or agreed to in writing, the Writings and Discoveries distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
