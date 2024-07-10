#include <iostream>
#define LOG(x) std::cout << x << std::endl

class Player // classes are types
{
public:
    int x, y;
    int speed;

    void Move(int xa, int xy)
    {
        x += xa;
        y += xy;
    }
}; // we need semicolon at the end of the class


int main()
{ 
    Player player; // we created variable player which is of type Player
    // variables that are made from class types are called objects
    // and a new object variable is called instance

    // by default class makes everything in it private that only its functions can access those variables
    // so if we want to access variables outsideof class we should make it public
    player.x = 5;

    player.Move(-5, 5);

    std::cin.get();
}

// A class is private by default, however with struct everything is public and if we want sth in it private we should write private
// so class and struct are basically similar but you can have a style of using them
// for example you can use struct whenever you want to have a structure that has only variables or named plain old data like mathematical vector class

struct vec2
{
    float x, y;
};

