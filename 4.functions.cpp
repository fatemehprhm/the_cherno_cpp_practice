#include <iostream>

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