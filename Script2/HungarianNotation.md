# [KabukiPress Cookbook](../ReadMe.md)

## [Script2](./ReadMe.md)

### Hungarian Notation

[Section video tutorial](https://www.youtube.com/channel/UCS2vQG4gUE3vXWV_K9XScQw)

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

## License

Copyright 2014-21 © [Cale McCollough](https://cookingwithcale.org).

This source code form is an open-source document, the Writings and Discoveries, that was written by and contains intellectual property. The Writings and Discoveries consist of documents, files, source code, technology design files, art, trademarks, and other content contained this file, folder and the GitHub repository located at <https://github.com/KabukiStarship/KabukiPressCookbook>. The Writings and Discoveries are published under the Kabuki Strong Source-available License, the License, which is a non-commercial open-source license and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Writings and Discoveries so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository as an Issue ticket to become part of the Writings and Discoveries. You may not sell the Writings and Discoveries or otherwise profit from derivative works created from the Writings and Discoveries without the expressed written permission of the copyright holder. Unless required by applicable law or agreed to in writing, the Writings and Discoveries distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
