# Secured Stack implementation
Implementation of [`stack`](https://en.wikipedia.org/wiki/Stack_(abstract_data_type)) data structure with several levels of protection. Second task in MIPT in the first year of education.

## Motivation
Imagine that there is a "bad guy" who wants to hack your program, go outside the array (we assume that there are no protections in the system) and get access to confidential data. As programmers, we want to prevent this. That is why the idea of this project is to understand the intricacies of ***basic*** methods of stack protection.

## Stack protection techniques
There are several layers of protections that can be turned on/off separately:
1. [`Canaries`](https://en.wikipedia.org/wiki/Buffer_overflow_protection#Canaries:~:text=use%20their%20structures.-,Canaries,-%5Bedit%5D). Canaries are used to determine whether there is [`buffer overflow`](https://en.wikipedia.org/wiki/Buffer_overflow).
2. [`Checksum`](https://en.wikipedia.org/wiki/Checksum). Checksum is used to determine whether there was some changes in data that were not expected.

## Compiling && Running
```
make init; make; ./stack.exe
```
