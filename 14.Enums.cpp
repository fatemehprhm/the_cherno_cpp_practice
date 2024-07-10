#include <iostream>

// Enums is short for enumeration, it is a set of values
// it is a way to give a name to a value

// int A = 0;
// int B = 1;
// int C = 2;

// instead of above we can have this
enum Example : unsigned char // 8 bit integer // this  type part is optional
// enumes by default are 32 bit integers but there is no need to use 32 bit value
// we can assign float because it isnt integer
{
    A, B, C // these are just integers
    // we can also give value to them
    // if we dont assign value to them it will start from 0 to 1 to 2  and ...
};

int main()
{         
    Example value = B; // so instead of having an integer as my type i can now use the enum name as an actual type
    // if i try to assign sth like this Example value = 6 i woould get an error be it has to be A B or C

    if (value == B)
    {

    }
    std::cin.get();
} 