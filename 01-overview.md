# 1. Overview

Modern C++ with ASCII Script and Kabuki Toolkit is a book about how to make intelligent connected devices with Automata Standard Code for Information Interchange (ASCII) Script and the Searle's Chinese Room, Interprocess, and Telemetry (SCRIPT) Protocol using Kabuki Toolkit.

Each chapter with the exception of this over will have a project that

Overview will briefly explain:

* The Chinese Room AI Thought Experiment.
* Searle's Chinese Room, Interprocess, and Telemetry (SCRIPT) Specification.
* Kabuki Toolkit C++1x Firmware-to-Software Development Kit (F2SDK).

## 1.1 Content Table

1.  *Overview*
    1. [Content Table](#11-content-table)
    2. [License](#12-license)
    3. [Preface](#13-preface)
    4. [Mission and Vision](#14-mission-and-vision)
    5. [SCRIPT Specification](#15-script-specification)
    6. [Kabuki Toolkit](#16-kabuki-toolkit)
    7. [Exercises](#17-exercises)
	4. [Mission and Vision](#14-mission-and-vision)
2.  [F2 Foundational Framework](02-f2-Foundational-framework.md)
3.  [Script](#3-script)
4.  [HMI Library](#12-hmi-library)
5.  [Application Framework](#4-application-framework)
6.  [Web Client](#5-web-client)
7.  [Web Framework](#5-web-framework)
8.  [Id Library](#6-id-library)
9.  [Store Library](#7-store-library)
10. [Graphics Library](#8-graphics-library)
11. [GUI Library](#9-gui-library)
12. [Audio Library](#10-audio-library)
13. [File Library](#11-file-library)
14. [MIDI Library](#13-midi-library)
15. [HAL Library](#14-hal-library)
16. [Math Library](#15-math-library)
17. [Project Library](#16-project-library)
18. [Sloth Library](#17-sloth-library)
19. [Installers](#18-installers)

## 1.2 License

Copyright 2018 (C) [Cale McCollough](https://calemccollough.github.io). All rights reserved (R).

This is a free and open-source document, the Document, that was written by and contains intellectual property that belongs to Cale McCollough. The Document consists of documents, files, source code, technology design files, trade secrets, art, and other content contained this file, folder and kabuki-script GitHub repository, the Repository. The Document is published under a generic non-commercial open-source license, the License, and is for educational and demonstration purposes only. You may use, reproduce, publicly display, and modify the Document so long as you submit and donate fixes and derived intellectual property, the Donated Ideas, to the Repository or by email to Cale McCollough at [calemccollough@gmail.com](mailto:calemccollough@gmail.com) to become part of the Document. You may not sell the Document or otherwise profit from derivative works created from the Document without the expressed written permission of Cale McCollough. Unless required by applicable law or agreed to in writing, the Document distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

## 1.3 Preface

I'm writing this book because it's really hard to get good information about how to make a good SDK. You've got to go to engineering school and/or know a lot of really low-level stuff.

This whole project started in 2014 when a doctor friend of mine suckered me into making a DNA extraction machine he had a patent on that using a strong electromagnet, which he amateurishly chose 30A of current for which is ridiculous, to stir and head metal beads. He didn't exactly know how it was supposed to work and it was pretty laughable.

I needed to be able to do PWM on the magnets in real-time, which is a very intensive task on a small microcontroller over a serial line. I also needed to be able to shut the magnets off immediately to prevent killing my doctor friend with the 30A electromagnets. This was when I invented Script. Script had to be fast, lean, reliable, and, above all else, safe.

It took many years of tedious debugging and non-stop rework to get Script to a state of perfection. I learned a lot from this process and during the process I got into Test-driven development, which then helped me develop my own hybrid system called Minmax Driven Development, which is a combination of all of the N-Drive Development practices combined with the Minmax artificial intelligence theory.

 For more information about Minmax Driven Development please read my book [Engineering Invention Startups](https://github.com/CaleMcCollough/engineering-invention-startups/master/blob/01-Overview) #WorkInProgress. The essence of the theory behind Driving Development to mix a bunch of N-Driven Development processes together to minimize time to market by minimizing rework and maximizing time spent in the flow state using Rapid Documentation in Markdown. In order to manage all of these N-Driven processes we then use the Minmax algorithm to minimize the cost and maximize the reward.

## 1.4 Mission and Vision

The mission of this book is to teach people how to make technology with ASCII Script and Kabuki Toolkit using modern C++ practices, and get users up to speed as quickly as possible. The vision of this book is to provide a free Markdown version of the book to all, regardless of ability to pay, and earn money by selling paper books because paper books are awesome and teaching classes.

The vision of this book is to provide enough projects, code snippets, and explanations to inspire the reader to innovate and bring their product to market as soon as possible.

This book is also goes with the book by Cale McCollough entitled the Minmax Startup: Engineering Invention Startups using AI. Minmax Startup is a open source book markdown book with papers copies for purchase about how to invent, start, and run high tech startups using modern best practices with an AI twist. The mission in regards to Minmax Startup is to provide all people, regardless of ability to pay, with the educational resources they need to come up and share the bounties of this beautiful Earth and technology and entrepreneurial revolution. The vision is that people will actually buy paper copies of the book because paper books are awesome, not to make someone else wealthy while we are poor.

## 1.5 SCRIPT Specification

Searle's Chinese Room, Interprocess, and Telemetry (SCRIPT) Specification, or Script for short, is a definition for a family of technologies based of the Chinese Room Thought Experiment. Script is useful for creating all kinds of apps, games, operating systems, consumer electronics, computers, etc with. Script was designed from scratch with a Sandwich Development Method to clean up and minimize the amount of code required to create apps as well as the memory and overhead processing using modern C++1x with cross-language bindings. Script specifies:

* ASCII Data Types
* Universal Polar Addressing
* SCRIPT Protocol, Crabs, and ASCII Script
* ICAN3 Distributed Nomination System

### 1.5.a Chinese Room Thought Experiment

The Chinese Room is a famous artificial intelligence philosophy thought experiment invented by the philosopher John Searle. The experiment highlights the difference between strong vs weak AI and how a normal everyday room in an office or network of rooms can form to create a turning equivalent machine that can fluently speak any language. If you would like to learn more about the Chinese Room Thought Experiment, please visit https://wikipedia.org/wiki/Chinese_room.

### 1.5.b ASCII Data Types

The Automata Standard Code for information Interchange (ASCII) Data Types are a set of data structures that can define most commonly-used computerized data. ASCII Data Types support UTF-8, UTF-16, and MSB Variant Encoding, 128-bit floating point numbers, 128-bit and 256-bit unsigned integers, and a set of ASCII objects and map data structures that use contiguous memory.

### 1.5.c Universal Polar Addressing

Universal Polar Addressing is a form of GPS coordinates that uses latitude and longitude as well as height above or below the earth's surface to route ultra-high-speed internet signals and convey Telemetry data. The format is the Telemetry Searle's Chinese Room, Interprocess, and Telemetry Protocol.

### 1.5.d SCRIPT Specification

The SCRIPT Protocol is a software-defined networking protocol (SDNP) based on the Chinese Room that supports both byte-encoded messages and human-readable text scripts. SDNP have the unique property that the languages may be swapped out dynamically at run-time and multiple language may coexists with each other in a single virtual machine. This is performed using the Chinese Room Abstract Stack Machine (Crabs), also called the Magic Crabs.

Crabs is a Virtual Machine Framework that uses some simple rules for how to detecting and handling keys, function parameters and arguments, and erroneous data and interpreting byte streams. Crabs is built for raw speed using modern C++ stack programming. Stack programming is a technique where as much data is placed on the stack as is possible and appropriate, and functions are optimized to minimize the number of register pushes and pops associated with function calls by taking advantage of how the C and C++ compiler handles the stack.

ASCII Script is the reference Script API. ASCII Script is responsible for dictating the SCRIPT Protocol SDNP features such as handling keys, function parameters and arguments, and erroneous data. When feature is introduced to the SCRIPT Protocol, the feature must have a defined ASCII Script implementation. This does not mean that is the only implementation, only that it is the reference implementation. Feel free to make as many implementations as you would like; gold stars going to all who get AI to write it's own implementation.

## 1.6 Kabuki Toolkit

Kabuki Toolkit is a Modern C++ Firmware-to-Software Development Kit (F2SDK), meaning it can be used to create anything from firmware to software. "Modern C++ toolkit" means that it is written is written using C++1x language features and uses modern best practices. The benefit of this design choice is that it is faster and easier (and most importantly cheaper) to create connected devices using one high quality unified development kit than it is to learn multiple APIs that are all formatted in different style guides and create an anarchy of design choices.

KT leverages an automated build tool (still in the works) called the Sloth that automates the importing and updating of third-party libraries. The tool (will) flatten source code hierarchy, minimize the number of directories, refactor namespaces into generics, and reformat all of the code into to a single style guide.

KT at it's core is the reference implementation of ASCII Script. KT then builds on premium open-source C and C++ SDKs, and wraps them with ASCII Script. If a better underlying implementation is found and the community agrees to upgrade, then in that module will be replaced with a better wheel; the goal being to minimize the number of wheels being invented and maximize revenue from selling tires and hubcaps for a minimum cost.

### 1.6.a Conventions

Kabuki Toolkit uses the following conventions:
* Templates: { UI, SI, I, T } stands for { Unsigned Integer, Signed Integer, Integer, Generic Type }.
*

## 1.8 Exercises

**1**. Explore the Script repository and read the SCRIPT Specification RFC at https://github.com/kabuki-starship/script.

**2**. Work through the Quickstart Guide in ~/kabuki-toolkit/docs/quickstart-guide.md.

**3**.
