#include <iostream>


// 

int main()
{   
    int example[5]; // an array of 5 ints
    example[0] = 4;

    // if we write sth like this example[7] = 7; because it is not part of the array we have caused memory access violation
    // because you have written in the memory that isnt yours
    

    std::cout << example << std::endl; // it will print the memory address of it because example is pointer type

    std::cin.get();
}  