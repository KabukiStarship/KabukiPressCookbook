# [Kabuki Toolkit Cookbook](../readme.md)

## [Overview](./readme.md)

This book details how to write portable software and perform Issue Driven Development in Modern Embedded-C++ with Kabuki Toolkit (KT) and Script2. The audience of this book is intermediate to expert programmers, though beginning C++ programmers may still find the book useful and will teach you Modern Embedded-C++ the right way. You would want to read this book if you're trying to learn Kabuki Toolkit or Script2, or if you are interested on how to build Modern Embedded C++ SDKs.

Serial Chinese Room, Interprocess, and Telemetry (**SCRIPT**) Script (**Script2**) is an implementation of the SCRIPT Specification, which defines the Automaton Standard Code for Information Interchange (ASCII) Data Structures. ASCII Data Structures are a set of contiguous data structures that assist in interprocess communication and data serialization and marshalling.

KT is AnEmbedded-C++ Firmware-to-Software Development Kit (**F2SDK**) built on top of Script2. KT was developed to run the A-Startup, A* (pronounced "A Star") Startup. KT provides a set of tools for creating software with C++

This Getting Started chapter will briefly explain the:

* Chinese Room AI Thought Experiment
* Kabuki Theater Theory of Consciousness.
* Script2 and the SCRIPT Specification.
* Kabuki Toolkit.
* Organization and Build System.

### Hungarian Notation UML Templates

Hungarian notation is a naming convention in which the name of the class implies what data type is used to store the data. Post Hungarian Notation places the class name before the type name(s); for example `FooInt32 ()` implies that the function foo returns an `int32_t` type. Pre-Hungarian Notation places the type name before the class name; for example `Int32Foo ()`. The default endianness of Hungarian notation is Post-Hungarian notation.

F2 Software supports the use of Hungarian Notation to incorporate templated objects into Compliant UML Models. F2 software reserves the symbols UI, SI, and I for n-bit unsigned integer, signed integer, and either signed or unsigned integer, and T for a generic type. F2 software refers to all other data types as ASCII Data Types if an ASCII Data Type exists for that type.

```C++
// Class Foo_UI_SI_I with function Foo_SI2 translates to the following C++ class:

template<typename UI, typename SI, typename I>
struct TFoo {
    UI one;
    SI two;
    I  three;

    TFoo (UI one, SI two, I three) :
        one   (one  ),
        two   (two  ),
        three (three) {
    }

    template<typename Char>
    const Char* Bar () {
      static const Char kString[] = { 'A', 'S', 'C', 'I', 'I', '\0' };
      return kString;
    }
};

cout << Foo<uint32_t, int32_t, int16_t> (1, 2, 3).Bar<char> ();
```

### Assembly Line Boundary

An assembly in Assembly programming and C/C++ is a set of source code compiled into a single contiguous block of executable code using the C or similar calling convention. There are only two primary types of assemblies, precompiled libraries and executable files. The rule in C++ for libraries and DLLs is that a precompiled library may not include any other precompiled libraries, but a executable file may incorporate multiple precompiled libraries. This is because of the way that C++ does name mangling and setups up the static memory.

**[<< Previous Section:](./.md) | [Next Section: >>](./.md)**

## License

Copyright 2018-9 (C) [Cale McCollough](https://calemccollough.github.io); all rights reserved (R).

This is an open-source document, the Document, that was written by and contains intellectual property. The Document consists of documents, files, source code, technology design files, art, and other content contained this file, folder and markdown.cookbook GitHub repository located at <https://github.com/kabuki-starship/kabuki.toolkit.cookbook>, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository as an Issue ticket to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Your Name. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
