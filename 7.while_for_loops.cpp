#include <iostream>
#include "Log.h"


int main()
{
    // variable declaration; condition; the code that will be called before the next iteration
    for (int i = 0; i < 6; i++) // we can also do this for (; condition;) if we want to 
    // put the conditions and declarations ans etc elsewhere if i do this: for ( ; ; ) 
    // in this mode the condition is always true so the loop will never end
    {
        Log("hello");
        if (!(i < 5))
            Log("gggg");
    }

    int i = 0;
    while (i < 5)
    {
         Log("hi");
         i++;
    }

    do
    {
        Log("hey"); // this will be executed at least one time no matter what is the condition
    } while (i < 5);
    std::cin.get();
}

