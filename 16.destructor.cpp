#include <iostream>

// Destructor runs when you destroy an object
// it uninitialize anything that you might have to or clean any memory
class Player
{
public:
    int x, y;

    Player()
    {
        x = 0;
        y = 0;
    } 

    ~Player() // destructor
    {
        std::cout << "destroyed entity" << std::endl;
    } 

    void Print()
    {
        std::cout << x << "," << y << std::endl;
    }
};

void function()
{
    Player p;
    p.Print();
    p.~Player(); // you can also call destructor manually
}

int main()
{         
    function();    
    std::cin.get();
    // destructor gets called when main function exits
} 