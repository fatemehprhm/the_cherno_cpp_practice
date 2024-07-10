#include <iostream>
#define LOG(x) std::cout << x << std::endl

// refrences are just pointers usually, in disguise
// unlike pointers that you can create a new pointer value and set it to sth, you cant do it with references because they should reference sth

void increment(int* value) // in here if we dont put * its like we are copying a = 2 to the function itself and its not refrencee of that value a
{
    (*value)++;
}

int main()
{ 
    int a = 5;
    int& ref = a; // here ref is not a seperate variable, its just an alias for a.

    ref = 2; // once you declare a reference you cant change what it references to

    LOG(a); // it will print 2

    increment(&a);

    LOG(a); // it will print 3


    std::cin.get();
}

