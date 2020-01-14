# [KabukiPress Cookbook](../)

## [Getting Started](./)

### Preface

I'm writing this book because it's really hard to get good information about how to make a good SDK. You've got to go to engineering school and/or know a lot of really low-level stuff, and it takes a lot of work to refactor the library once it becomes large.

This whole project started in 2014 when a friend of mine, Dr Paul Bently, asked me to help him make a DNA extraction machine he had a patent on. The machine used a strong electromagnet, the first design being extremely overpowered at 30 amps of current, to stir and heat metal beads. He didn't know exactly know how it was supposed to work so we were trying trying to experimentally determine the frequency and current we needed to stir and heat the liquid. We needed to be able to do PWM on the magnets in real-time, which is a very intensive task on a small microcontroller over a serial line. I also needed to be able to shut the magnets off immediately to prevent killing my friend with the 30A electromagnets. Script2™ had to be fast, lean, reliable, and, above all else, safe.

Script2™ was a radical design and it took many years of tedious debugging and non-stop rework to get the code to a modular state of perfection. During this time I learned how to do Test-driven development (TDD) and Issue Driven Development (IDD) and I fell in love with IDD and created the techniques in this book.

 For more information about Minmax Driven Development please read my book [Engineering Invention Startups](https://github.com/cale-mccollough/engineering-invention-startups/master/blob/01-Overview) #WorkInProgress. The essence of the theory behind Driving Development to mix a bunch of N-Driven Development processes together to minimize time to market by minimizing rework and maximizing time spent in the flow state using Rapid Documentation in Markdown. In order to manage all of these N-Driven processes we then use the Minmax algorithm to minimize the cost and maximize the reward.

**[<< Previous Section:](./) | [Next Section: >>](./)**

## License

Copyright 2018-20 © [Kabuki Starship™](https://kabukistarship.com).

This is an open-source document, the Document, that was written by and contains intellectual property. The Document consists of documents, files, source code, technology design files, art, and other content contained this file, folder and markdown.cookbook GitHub repository located at <https://github.com/kabuki-starship/kabuki.press.cookbook>, the Repository. The Document is subject to the terms of the Kabuki Strong Source-available License, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository as an Issue ticket to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Your Name. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
