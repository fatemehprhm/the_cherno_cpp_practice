#include <iostream>

// #pragma once: it comes in the header file. Its a preprocessor command
// it means only include this file once, its called header gaurd, it prevent use
// from including a single header file multiple times into a single translation unit

void multiply(int a, int b)
{
    int result = a * b;
    std::cout << result << std::endl;
}

int main()
{
    multiply(5, 4);
    multiply(6, 4);
    std::cin.get();
}