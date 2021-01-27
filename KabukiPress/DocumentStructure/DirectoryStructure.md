# [KabukiPress Cookbook](../../ReadMe.md)

## [Document Structure](./ReadMe.md)

### Directory Structure

[Section video tutorial](https://www.youtube.com/channel/UCS2vQG4gUE3vXWV_K9XScQw)

The directory structure of a KabukiPress website is based on I am You Language (IMUL) Markdown. Each KabukiPress site is called a KabukiPress Module and is contained in a single folder with the option to add KabukiPress Modules with links to other folders. The HTML equivalent to `.html` is the `ReadMe.md` file.

#### Folder Structure

The folder contents gets parsed with an interpreter and any files or folders that start with an underscore will not be copied the output folder. All other files will be copied to the output folder in the same tree structure as the KabukiPressModule, minus anything with a leading underscore.

##### Required Files and Folders

* ReadMe.md
   * _Includes
   * _Layouts
      * Default.html
   * _SASS

#### _Includes

The `_Includes` folder contains HTML components similar to React components. Each `HTML` file contains a snipped of code that can be included into other components to create fully functional websites.

#### _Layouts

The `_Layouts` folder contains templates for the web page types such as the Default, Page, Post, or other user-defined page types. A Layout is different than an Include in that the Include is just a component in a web page but cannot create a webpage without using a layout.

The only required layout is the `Default.html` file in the `_Layout` folder and an `_Includes` folder.

**[<< Previous Section:Document Structure](./ReadMe.md) | [Next Section: Variables >>](./Variables.md)**

## License

Copyright 2021 © [Cale McCollough](https://cookingwithcale.org).

This is an open-source document, the Document, that was written by and contains intellectual property. The Document consists of documents, files, source code, technology design files, art, and other content contained this file, folder and the GitHub repository located at <https://github.com/KabukiStarship/KabukiPressCookbook>, the Repository. The Document is subject to the terms of the Kabuki Strong Source-available License, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository as an Issue ticket to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of the copyright holder. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
