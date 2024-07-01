// the only distiction you have between different data types in c++ is size.
// the actual size of the the data type depend on the compiler
// commonly int variable is 4 byte large

// you have to give value immaediately when you define a variable

#include <iostream>

int main()
{
    char a = 'd'; // 1 byte you can also pass number to char but it will treat it as a character
    short t = 3; // 2 bytes 
    long z = 5; // 4 bytes
    long long i = 2; // 8 bytes
    int x = 8; // -2b to 2b and it is signed integer and is 4 byte of data, 2^31
    unsigned int y = 10; // unsigned integer from 0 to 4b. 4 byte, 2^32

    float u = 5.5f; // 4 bytes
    double r = 5.2; // 8 bytes

    bool e = true; // 1 byte, zero is false and anything excepy zero is true
    // it actually takes 1 bit of memory but we cant address a bit so we have to store it in a byte
    // but we can store 8 bools in 1 byte

    // there are also custom data types

    // there is an operater named sizeof which we can check the size of data type in a compiler, sizeof(bool)

    std::cout << x << std::endl;
    std::cin.get();
}