#include <iostream>

// break points: is a point in our program at which the debugger will break and break here means pause
// when execution hit the line with break point it will pause 
// it will suspend that thread and let us take a look at the state of the program
// and by state im refering to memory

// in order to set a break point hit f9 to set it on current line or click on the side bar near the line
int main()
{
    int a = 8;
    a++; // will increment a by one
    const char* string = "hello"; // you can have string by typing char*
    std::cin.get();
}

// step into is going to step into the current function
// step over is going to step over to the next line of code in the current function
// step out is going to step out of the current function and take us backto whatever called this function

// every 2 hexa decimal digit is equal to 1 byte.