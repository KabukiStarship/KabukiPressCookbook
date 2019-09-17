# [Kabuki Toolkit Cookbook](../readme.md)

## [Introduction](./readme.md)

### Build-time Optimizations

In C++ there are some language features that are very powerful, but slow down the compiler a lot. Script2 reduces build-time through the use of 3-file Translation Unit with unique Translation Unit names and wrapper classes to hide the templates and allow you to include smaller .

#### Unique Translation Unit Names

This rule straddles the line between framework and stylesheet, but leans towards the framework because it affects the way the system builds.

C++ compilers support partial classes; meaning that you can split up an object's implementation into multiple files, which is useful for splitting up work on classes between multiple developers so it's cleaner to merge the branches.

For each implementation file compiled, the compiler generates a translation unit (TU or TUs) which then get linked together during the link stage. This TU is given the file's name. The compiler will use a hash table of TUs to check if the implementation was split between multiple TUs and if there are multiple translation units with the same name the compiler must check which TU to add the code to. Hash table collisions are very time consuming to resolve leading to longer build time. For this reason implementation files should have unique filenames in order to reduce unneeded hash table collision resolutions.

Script2 Compliant software have unique implementation filenames named after the namespace name in modulename_translationunitname format, where all modulename(s) are unique.

***Example***

```C++
// @file c_go.h
namespace foo::bar {
  struct Go {
      Go ();
  };
};
}
```

***Translation Unit***

```C++
// @file `modulename_go.cc`
#include <foo/bar/c_go.h>
using namespace foo::bar;
Go::Go() {}
```

## License

Copyright 2018-9 (C) [Cale McCollough](https://calemccollough.github.io); all rights reserved (R).

This is an open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, art, and other content contained this file, folder and kabuki-Script2 GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository located at <https://github.com/kabuki-edu/kabuki.toolkit.cookbook> to become part of the Document. You may not sell the Document or derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
