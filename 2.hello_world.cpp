#include <iostream>
#include "Log.h"

// declaration: We are declaring that sth called "Log" exists
// this is like a promise because we say to complier that there is function called Log and it trusts us
// so how  does it run the code? it is where the linkers comes in
// declaration is very similar to definition however what it doesnt have is the actual body.
// definition: is sth that says this is what this function is

int main() 
{
    Log("hello world");
    std::cin.get();
}

// Compiler takes the code text and turn it into object file
// It first preprocess our code then go for tokenizing and pausing and etc to interpret the c++ language
// this result is sth called an abstract syntax tree being created 
// it is either constant data or instructions
// once the tree is created then it starts to generate code which is actual machine code that cpu will execute

// preprocess code is in .i format

// #define x y
// define: basically just do a search for x word and replace it with whatever follow (y)

// if pre processor can let us include or exclude code based on a given condition

// obj file is a binary file , if we want to read it we turn it into a .asm foramt which is the readable result of obj file

// #if pre processor can let us include or exclude code based on a given condition

// the primary focus of linking is to find where each symbol and function is and link them together
// even if we dont hae multiple cpp file, when building the program, we need to declare the entry point which links to the main file
// the entry point doesnt have to be main function there just has to be an entry point

// if error starts with letter c its compiler error and if it starts with letter lnk its linker error

// suppose that you have a function that has error in it, but you never use it in the main funvtion, the program will give you error
// why? because you could use it in another file, and linker does need to link that but if we tell the compiler we will
// use this function only on this file, the problem solves, how? put "static" before function definition

// inline before function definition: means that its going to take our actual function body and replace the call with it


