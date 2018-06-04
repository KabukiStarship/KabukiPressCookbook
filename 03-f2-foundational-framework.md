# 2 F2 Foundational Framework

The core of KT is the F2 Foundational Framework. F2 is a combination of Agile Development and Issue Driven Development with UML compliant C++ best practices. It uses a Page-Major-Minor Seam Enumeration System based upon a standard vertical 8.5" by 11" sized sheet of paper with enough room for margins, a header, a paragraph, and a footer to allow for clean printing into Engineered Software Analysis and Software System Definitions.

## 2.1 Page, Major and Minor Seams

Page, Major and Minor Seam Numbers are contiguous positive integers starting at a positive index enumerated in the order they are to be tested. Enumerated seams allow developers to peal back the layers of the code to the core so you can debug that seam in isolation with debug information that is customized for that seam.

The smallest seam increment is the Minor Seam. A Minor Seam is defined as a group of one or more functions or classes that are decoupled from the minor seam above them that has debug information that is optimized for debugging each seam quickly with a unit test *(@google unit testing)*; and quickly is defined as the tortuous not the hare.

The second largest seam increment is the Major Seam. A Major Seam is defined as a group of two or more Minor Seams that have one or more demo projects associated with them. Namespaces and modules may be spread out across multiple seams. 

The seam increment is a Page Seam. A Page Seam is defined as a group of two or more major seams that fit neatly on single 8.5" by 11" sheet of paper and represent a distinct and significant program or program feature. Example what distinct and significant is is up to the developer, it's more important that it fits neatly in the software engineering documentation.

Namespaces and modules may appear on multiple seams and pages. For example, part of a module may be introduced in SEAM_1 and that module may also be developed upon in SEAM_2, then not developed upon in SEAM_3, but again developed upon in SEAM_4. When a previous seam has been changed, it may regress the Progress Seam number. The Project Progress Seam Number is the seam number is the highest seam number that has passed all of the unit tests.

### 2.1.a Macros

KT uses Visual-C++ precompiled headers to speed up the build process, and some macros to provide debug information for specific seams. KT uses Google C++ Style Guide so C_PREPROCESSOR_MACROS_ARE_IN_UPPER_SNAKE_CASE_IN_ALL_CAPS. In KT, the seam number is found in the "stdafx.h" file.

```C++
#define PAGE_SEAM 1
#define MAJOR_SEAM 4
#define MINOR_SEAM 2
```

In order to use the macros, KT uses some macros for printing debug information to the console using C++ variadic macros.

```C++
#if PAGE_SEAM == 1 && MAJOR_SEAM == 1 && MINOR_SEAM == 1
#define PRINTF(format, ...) printf(format, __VA_ARGS__);
#define PUTCHAR(c) putchar(c);
#else
#define PRINTF(x, ...)
#define PUTCHAR(c)
#endif
```

When you see PRINTF in all caps, this means this is debug information for this specific 

## 2.1 UML Compliant Page Partitioning

An F2 Page is defined as a group of seams that fit neatly on a page with some test around it.

## 2.1 Global and Module Configuration

F2 Modules have have all of the source code files in a single folder with all filenames in lower_snake_case. Each folder contains a `config.h`, the config file, and `global.h`, the global file. There is another global file for KT and another global file for the target program. In the target program there is a `assembly.h` file that is #included from each module's config file.

```
```


## Just Say No to Pimpls

This was a rant from stack overflow that inspired me to write this book. It's going to change.

Besides the obvious snake_case vs UpperCaseCammel, the design approaches of Kabuki Toolkit and boost are very different. Kabuki Toolkit uses a Pimpless Design, which means that it does not use the Pimpl Design Pattern.

The details folder is an abstraction technique for moving members that aren't in your module API into a sub-namespace and sub-folder and is used for implementing the "Private implementation" (pimpl) design pattern, a pattern invented by one of the boost heads Herb Sutter. The pimpl is a pattern that uses a shared object model to create cross-platform pimpls that get implemented in boost using the .ipp files. This is mostly for working with hardware and OS dependent APIs that rely on things like system clocks, timers, locks, threads, graphics, audio, or custom hardware, etc.

The details namespace is supposed to add the benefit that it makes your API cleaner but it's not best engineering practice as this is just a [Doxygen][1] setup and file organization issue. If you want to clean up your public API docs, better engineering practices are to hide your internal private API in .cc (.cc is Google's naming convention for a .cpp file that means C/C++) files and include the .cc file, or two, place your public facing API in a sibling namespace. When including the .cc file use a standard header with include guard named with class_name_or_whatever.h.cc extension and standard .cc implementation. In your Doxygen project you then remove .cc from the Expert->Input->FILE_PATTERNS that shouldn't get parsed in the first place.

If you look at the [boost::asio][2] library, you'll see when you might want to use a details folder and when you shouldn't use it because it is OUT OF CONTROL!!! I want to beat my head against a wall just looking at it! Most of the stuff the folder contents are decoupling wrapper classes for dealing with threads, locks, and core SDK stuff that exists in a sibling namespace. The problem is that the child modules are referencing their parent's sibling namespace modules. THIS IS BAD!!! Your child namespace members should NEVER reference a parent!!! Children should always be decoupled independent modules that are only used by its parent. Once the module is used in another module, the module either becomes a sibling of the parent or collapsed with the parent namespace into a BaseclassChildclass format. BaseclassChildclass format helps flatten the hierarchy into module layers.

A much better design pattern than the pimpl is to create a hardware abstraction layer like [mbed][3], or Operating System Abstraction Layer (OSAL), with public implementations using extern C-style functions. mbed is a gem of a model to emulate because it's based on a C-core called CMSIS which makes creating target C++ HAL wrappers easy.

boost might be easy but the setup their camp is trying to avoid takes very little time and you REALLY need to know how to do that to work in this industry. The boost way is to just copy the files into a folder and include them in your code using header-only tricks, but the problem with that approach is you pay for it by being forced recompile the SDK frequently. SDK library code should REALLY be in .cc files and compiled into dynamic or static libraries with no build time. Libraries should speed up development not slow them down because your code-compile-debug cycle time is critical to maximizing flow state and minimizing development costs (or even finishing the code).

The biggest problem with the pimpl design pattern from an engineering perspective is that it couples child to parent namespace and it's not UML compliant. Golden rule: if you can't draw a line to it in UML it's not good software engineering. Namespaces should really be layers that you add and remove in order to test the software. This isn't a programming rule but an engineering time optimization mantra. Code with messy dependency diagrams takes longer to debug. This rationale is detailed in in the [OSI Model](https://en.wikipedia.org/wiki/OSI_model). Each layer should only talk to the layer adjacent to it in order to decouple the layers; namespaces are supposed to represent module layers not to sort files. This means that there should be a maximum of 2 namespace depths beyond the API root namespace (for a tree depth of 3). Using this paradigm you can create 2 bottom layers, 2 top layers, and unlimited sandwich layers for a minimum of 5 layers, which facilitates virtualizing the 7-layer OSI Model.

This really matters in C++ because C++ uses File-Level Scope, meaning when you include a file you get everything that is within the scope of that file. In C++, when you include a namespace you should include all of the public interface members for that namespace and only those members. In order to have classes from different modules you couple the modules forcing you to use forward declarations of classes that wreak havoc on the compiler. For small projects, you won't notice the time, but in that case, you don't need to use additional namespaces to unclutter your folder and you're just wasting your time and if you're working with large SDKs it slows the compiler down costing you time and money. Either way your waste your time so it's a deal breaker. THAT COSTS ME MONEY!!!

C++ is also very slow at working with forwarding declarations of templates and classes. This is because templating happens before compiling the translation unit and adds an extra step through the hash table monster compilation process, potentially causing A LOT of build pipeline stall that you have to physically sit there and wait for the many of megabytes of code to compile. OVER AND OVER AND OVER AGAIN!!!

You don't notice it until you have to compile a large SDK, but C++ compiles very slowly so it can take hours to compile large API for multiple targets. You gotta get a build server after a certain point and your compile-measure-learn cycle times take a nose dive so you can see why you might want to design your C++ code for the compiler. C++ REALLY wants you to have decoupled translation units. Decoupled TUs can be compiled in parallel but coupled TUs will need to be compiled sequentially and recompiled more frequently. How many times do I have to wait for boost to recompile? THAT IS A LOT OF TIME!!!

## Best Practices

Here are some best practices for managing large cross-platform projects from my experience with [Kabuki Toolkit][4], a DLL friendly Java-like C++1x SDK for making touchscreen IoT plugin widgets, pc-mobile-web-server apps, and firmware with mbed and [Script][5].

1.) Maximize flow state time and programmer efficiency by minimizing mouse clicks, file count, head movements, and hierarchical abstractions that don't generate money or add measurable value to the product. Consider naming classes with BaseclassSubclass format, to use alphabetical sorting and autocomplete to group objects rather than using a namespace; autocomplete is your friend. It is fastest to work with one folder per module with parent coupled to child modules but not vice-versa.

2.) Only separate .h and .cc files (.cc means C/C++ BTW which makes more sense because the C code gets mixed with the C++ code... Google is wise.) when you need to save drive space or need to ship a closed source precompiled library with headers. Take a stopwatch and time yourself when your managing files. You'll see it's really slow to click on things and have thousands of context switches... trust me I've been sorting files non-stop for years and IT NEVER STOPED until I got rid of the folders and minimized my file handling time. After flattening the hierarchy of Kabuki Toolkit the SDK went from 800 megabytes of people's useless crap (for lack of a better word) to 25 megabytes of pure gold... looking back there is absolutely no reason to use multiple folders per layer because the code compile faster and we only separated the .h and .cc  to save drive space and ship closed source binaries with headers, but if you don't' need to do that it just wastes time.

3.) Include a [StarUML][6] model in every project and use test-driven development to avoid code rework. I include a ~/source/project_name.mdj file in all my projects. Use UML to define a facade to proprietary implementations rather than a pimpl.

4.) Define your public interface using [Doxygen][1] and create a GitHub page for your project to host the API docs. Export StarUML models as jpg to in the project wiki. This defines and minimizes your points of coupling between your shared and proprietary implementations and gives you a better product.

5.) Use a well-documented style guide and link to it in your source using a Doxygen @link. The [Google C++ Style Guide][7] was designed to integrate large code bases written in multiple languages so it's got a little bit of everything in it. It will help minimize your management decisions overhead using curated best practices. Note: the pimpl and details folder is not in Google's style guide.

6.) Create quickstart-guide.md, development.md, faq.md, and release-instructions.md in the ~/docs/ folder to make your project easy to get started with and easy for contributors to contribute to. The details folders should be explained in these markdown files.

7.) Keep module names short and rename all of your .cc files to the format "modulename_targetos_childnamespace_translationunit.cc" all lowercase and copy all source files into a single folder. For targetos use `win32`, `linux`, `unix`, `osx`, `ios`, `android`, etc. The reasoning is that the C++ compiler will look for your compiled translation unit and it will look in the last file it found an implemented member in causing a lot of expensive hash table resolutions, thus not having unique .cc filename directly translates into wasted man-hours and money waiting for code to compile.

8.) Use a UML facade class that contains C-wrapper functions for mapping UML models to platform-specific implementations. C-wrapper functions make binding to languages like C# and Python easier and they work well in UML sequence diagrams. 

9.) For graphical apps, use an interface called Display, or something one-way to that effect, in your library classes to switch views from the library side, and an interface called Controls, or again a word that means ONE-WAY, to get input from the app implementation; the Display and Controls are decoupled and it does not help the UML sequence diagrams to combine them.. This eliminates the assembly boundary problem, doesn't need a non-UML compliant pimpl, is cross-language, is not bug-prone, helps clean up your API up A LOT, and works exceptionally well for doing Test Driven Development by allowing you to switch views in Use Case Sequences in your unit tests by printing them to the console.

10.) Each module folder should have a config.h file that gets included at the beginning of each module header, a global.h file that includes all of the public API members, and the root SDK folder only contain the config.h and global.h. The config.h file should setup any platform-specific code for your CFacade. This will make your module UML compliant, decouple your module dependencies, and make the pimpl pattern and details folder obsolete.


  [1]: http://www.stack.nl/~dimitri/doxygen/
  [2]: http://www.boost.org/doc/libs/1_65_1/doc/html/boost_asio.html
  [3]: https://www.mbed.com/en/
  [4]: https://github.com/kabuki-starship/kabuki-toolkit
  [5]: https://github.com/kabuki-starship/kabuki-toolkit/wiki/Script-Specification-RFC
  [6]: http://staruml.io/
  [7]: https://google.github.io/styleguide/cppguide.html

# The License

Copyright 2018 (C) [Cale McCollough](https://calemccollough.github.io). All rights reserved (R).

This is a free and open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, trade secrets, art, and other content contained this file, folder and kabuki-script GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository or by email to Cale McCollough at [calemccollough@gmail.com](mailto:calemccollough@gmail.com) to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

