# [Kabuki Toolkit Cookbook](../readme.md)

## [Seam Trees](./readme.md)

### Seam Gerrymandering

In general, each seam increment should only work on one class unless that class is coupled to or married with functionality with another class. Even if it's a simple class, the problem with C++ is that sometimes it blows up on you, and you need to figure out exactly which class there is a missing semicolon, period, or bracket. Another benefit of this design pattern is that when you first start making seam tree tests it's easiest to just make one seam per class anyways becaus it minimizes the thought required to chop of the seams.

Seam Gerrymandering is, as the name implies, very similar to political district Gerrymandering, only it is when a seam covers regions that are representative of the seam coverage. Seams should not be Gerrymandered in such a way to the seam is falsely represented. The goal is that when there is a bug discovered code or you want to add, change, or remove functionality, you want to block out all of the other debug code and just see and focus on the debug code for the object you're working on.

Your primary inspiration to not Gerrymander seams is that you want to get your commit count as high as possible as quickly as possible so it's best to make small scrums and to keep a moderate backflow of very small tasks to do when you have some extra time.

**[<< Previous Section:Summary](./summary.md) | [Next Section:Script2 >>](../script2/readme.md)**

## License

Copyright 2018-9 (C) [Cale McCollough](https://calemccollough.github.io). All rights reserved (R).

This is a free and open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, art, and other content contained this file, folder and script2_and_kabuki_toolkit_cookbook GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository located at <https://github.com/kabuki-starship/kabuki_toolkit.cookbook> to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
