#include <iostream>
#include <array>


int main()
{   
    int example[5]; // an array of 5 ints // this array gets created on stack and it will be destroyed
    // when we reach the end curly bracket and gets out of scope
    int* another = new int[5];  // this gets created on the heap and will qactually be alive until we destroy it or program ends
    delete[] another; // so we can delete it like this
    
    example[0] = 4;

    int* ptr = example;

    *(ptr + 2) = 6;

    // there is bulit in array type in cpp 11
    std::array<int, 5> another1;

    // if we write sth like this example[7] = 7; because it is not part of the array we have caused memory access violation
    // because you have written in the memory that isnt yours
    

    std::cout << example << std::endl; // it will print the memory address of it because example is pointer type

    std::cin.get();
}