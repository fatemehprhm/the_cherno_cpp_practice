#include <iostream>

// constructor is basically a special type of method which runs every time we instantiate an object

// class Player
// {
// public:
//     float x, y;

//     void Init()
//     {
//         x = 0.0f;
//         y = 0.0f;
//     }

//     void Print()
//     {
//         std::cout << x << "," << y << std::endl;
//     }
// };
// int main()
// {         
//     Player p;
//     p.Init(); // this will make them to output 0 instead of random variable
//     p.Print(); // without init it will output a random values because when we instantiated it and allocated memory fot it
//     // we didnt initialize that memory we got whatever was left over in that memory space 
//     // so we need initiallization so we create init method but it cause extra code so we use constructers
//     std::cin.get();
// } 

// using constructors
class Player
{
public:
    int x, y;

    // Player() = delete; // this will delete default constructor

    Player() // it doesnt have return and its name must match the class name, we can optionally give it parameters
    {
        x = 0;
        y = 0;
    } // if we dont write a constructer we will still have it but its default constructer but it doesnt do anything
    
    // i can write as many contructor as i want
    void Print()
    {
        std::cout << x << "," << y << std::endl;
    }
};
int main()
{         
    Player p; // if contructor have entity we can instatiate class like this: Player p(0, 0)
    // contructors wont run if we dont instantiate methods so if we use static methods they wont run
    // if we make the contructor private we cant instantiate class liket this: Player p but we can use its static methods
    p.Print();
    std::cin.get();
} 