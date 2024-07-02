#include <iostream>
#include "Log.h"
// due yo constant jumping between conditions and branches in if statements it will slow the program
// so most programers tend to not use if statements

int main()
{
    int x = 9;
    bool cr = x == 5; // in comparison you basicaaly grab 4 bytes of memory that they take up and just comparing each byte
    if (cr)
    {
       Log("hello");   
    }
    else if (x==9)
        Log("gggg");
    else
        Log("hi");
    
    
    std::cin.get();
}
