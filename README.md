# rot13 (in C)
simple C program to manipulate words passed to it (as arguments) using the ROT13 (and ROT47) substitutional cipher(s).

## Background
I originally created this code back in 2009 (2009-04-16 01:17:54 to be exact!). I think I was sat at my kitchen table in my first year student apartment. This code was used to test my understanding of compilers, makefiles, arguments and the C language itself

## [Wikipedia](https://en.wikipedia.org/wiki/ROT13) description of ROT-13
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher that replaces a letter with the 13th letter after it, in the alphabet. ROT13 is a special case of the Caesar cipher which was developed in ancient Rome.

Because there are 26 letters (2×13) in the basic Latin alphabet, ROT13 is its own inverse; that is, to undo ROT13, the same algorithm is applied, so the same action can be used for encoding and decoding. The algorithm provides virtually no cryptographic security, and is often cited as a canonical example of weak encryption.

## Prerequisites
* VS Code: ```choco install vscode -y```
* MinGW: ```choco install mingw -y```
* [C/C++ VS Code Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

## Usage
```powershell
# ROT-13
>./rotate.exe "hello world"
uryyb jbeyq

>./rotate.exe "uryyb jbeyq"
hello world

# ROT-47
>./rotate.exe --47 "input string" "something else"
:?AFE DEC:?8 D@>6E9:?8 6=D6
```

## Note / Limitations
Inputing special characters through powershell commandline can be tricky, generally you can use the ``` ` ``` character to escape input strings. This is imilation of PS and not of the code here.

Example:
```powershell
❯ ./rotate.exe --47 "p52`>"
Adam
```

## Truth Tables

### ROT13
Applying ROT13 to a piece of text merely requires examining its alphabetic characters and replacing each one by the letter 13 places further along in the alphabet, wrapping back to the beginning if necessary. A becomes N, B becomes O, and so on up to M, which becomes Z, then the sequence continues at the beginning of the alphabet: N becomes A, O becomes B, and so on to Z, which becomes M.

```
-----------------------------------------------------------------
| Input  | ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz |
| Output | NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm |
-----------------------------------------------------------------
```

### ROT47
OT47 is a derivative of ROT13 which, in addition to scrambling the basic letters, treats numbers and common symbols. Instead of using the sequence A–Z as the alphabet, ROT47 uses a larger set of characters from the common character encoding known as ASCII. Specifically, the 7-bit printable characters, excluding space, from decimal 33 '!' through 126 '~', 94 in total, taken in the order of the numerical values of their ASCII codes, are rotated by 47 positions, without special consideration of case. For example, the character A is mapped to p, while a is mapped to 2.

```
-----------------------------------------------------------------------------------------------------------
| Input  | !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~ |
| Output | PQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~!"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNO |
-----------------------------------------------------------------------------------------------------------
```

## Future Ideas (braindump)
* ROT5
* Unicode

## VS Shortcuts
* Building for the First Time: ```ctrl + shift + b```
* Debugging for the First Time: ```f5```
