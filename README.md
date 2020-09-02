# rot13 (in C)
simple C program to manipulate words passed to it (as arguments) using the ROT13 substitutional cipher

## Background
I created this code back in 2009 (2009-04-16 01:17:54 to be exact!). I think I was sat at my kitchen table in my first year student apartment. This code was used to test my understanding of compilers, makefiles, arguments and the C language itself

## [Wikipedia](https://en.wikipedia.org/wiki/ROT13) description of ROT-13
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher that replaces a letter with the 13th letter after it, in the alphabet. ROT13 is a special case of the Caesar cipher which was developed in ancient Rome.

Because there are 26 letters (2×13) in the basic Latin alphabet, ROT13 is its own inverse; that is, to undo ROT13, the same algorithm is applied, so the same action can be used for encoding and decoding. The algorithm provides virtually no cryptographic security, and is often cited as a canonical example of weak encryption.

## Prerequisites
* VS Code: ```choco install vscode -y```
* MinGW: ```choco install mingw -y```
* [C/C++ VS Code Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

## VS Shortcuts
* Building for the First Time: ```ctrl + shift + b```
* Debugging for the First Time: ```f5```
