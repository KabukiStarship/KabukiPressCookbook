```
 _______ _              _______             _             _  
(_______) |            (_______)           (_)           | |
    _   | |__  _____    _  _  _ _____  ____ _  ____ _____| |
   | |  |  _ \| ___ |  | ||_|| (____ |/ _  | |/ ___|____ | |
   | |  | | | | ____|  | |   | / ___ ( (_| | ( (___/ ___ | |
   |_|  |_| |_|_____)  |_|   |_\_____|\___ |_|\____)_____|\_)
                                     (_____|                                
 /\
( /   @ @    ()     ██████╗██████╗  █████╗ ██████╗ ███████╗
 \  __| |__  /     ██╔════╝██╔══██╗██╔══██╗██╔══██╗██╔════╝
  -/   "   \-      ██║     ██████╔╝███████║██████╔╝███████╗
 /-|       |-\     ██║     ██╔══██╗██╔══██║██╔══██╗╚════██║
/ /-\     /-\ \    ╚██████╗██║  ██║██║  ██║██████╔╝███████║
 / /-`---'-\ \      ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝ ╚══════╝
  /         \     
```

# [3] Crabs

The easiest way to describe Crabs is that it's a generic stack machine that can work on either pen-and-paper or on a computer, and it uses the Automaton Standard Code for Information Interchange (ASCII) B-Sequences (BSQ) for input and output parameters and arguments. If you haven't already, it is highly recommended to read the ASCII Data Specification because the data types are used all over the place; the spec can be found at:

[https://github.com/kabuki-starship/script2/blob/master/docs/ascii_data_specification_rfc.md](https://github.com/kabuki-starship/script2/blob/master/docs/ascii_data_specification_rfc.md)

## [3.1] The ASCII Factory

Memory handling in Crabs is abstracted away using the ASCII Factory using a single C-function pointer that returns a pointer to a buffer using the prototype:

```C++
typedef UIW* (*AsciiFactory)(UIW* buffer, UIN function, void* ptr);
```

## License

Copyright 2014-2018 (C) [Cale McCollough](https://calemccollough.github.io). All rights reserved (R).

This is a free and open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, trade secrets, art, and other content contained this file, folder and engineering-invention-startups GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository or by email to Cale McCollough at [calemccollough@gmail.com](mailto:calemccollough@gmail.com) to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
