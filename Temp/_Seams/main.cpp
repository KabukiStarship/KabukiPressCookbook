/* KabukiPress Cookbook @version 0.x
@link    https://github.com/kabuki-starship/astartup.cookbook.git
@file    /_seams/main.cpp
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2014-9 (C) Cale McCollough; all rights reserved (R). This
source code form is covered under the Kabuki Strong Source-available License.
A copy of the license that YOU MUST READ can be found in the readme.md file
in this folder. */

#include "../kabuki.press/client.inl"

int main(int arg_count, const char** args) {
  return kabuki::press::Client(args, arg_count).Run();
}
