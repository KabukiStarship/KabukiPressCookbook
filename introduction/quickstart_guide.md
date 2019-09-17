#

## Quick Start Guide

```AsciiArt
________       _____      ______            _____              _____
___  __ \___  ____(_)________  /__   _________  /______ _________  /_
__  / / /  / / /_  /_  ___/_  //_/   __  ___/  __/  __ `/_  ___/  __/
 / /_/ // /_/ /_  / / /__ _  ,<      _(__  )/ /_ / /_/ /_  /   / /_
 \___\_\\__,_/ /_/  \___/ /_/|_|     /____/ \__/ \__,_/ /_/    \__/
```

**1.** Clone the kabuki_toolkit and script2 repos into your workspace or project 3rd-party dependencies directory:

```Console
cd C:
mkdir workspace
cd workspace
mkdir kabuki-starship
cd kabuki-starship
git clone https://github.com/kabuki-starship/kabuki.toolkit.git
cd kabuki_toolkit
git clone https://github.com/kabuki-starship/script2.git
```

**2.** Open the `kabuki.toolkit.sln` Visual Studio Project and inspect how the projects are laid out.

**3.** To add KT to your project, you don't need to build a library because we use an method to dramatically reduce compile time called a Dual translation unit. Rather than have `.cpp` files, we put the implementation in inline headers and you include them in your project in a separate translation unit. Create a file named `library.cpp` and in that file add the line:

```C++
#include <kabuki.toolkit/module.inl>
```

**4.** In order to save the stack debug data when an DASSERT occurs, set breakpoint in the file `script2_test.cc` at the return line for:

```C++
BOL TestWarn(const CH1* function, const CH1* file, SI4 line);
```