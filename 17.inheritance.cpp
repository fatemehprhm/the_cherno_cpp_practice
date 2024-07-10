#include <iostream>

// heritance allows us to have a base class which contains common functionality and then
// its allows us to branch off from that class and create sub classes from that initial parent class
class Entity
{
public:
    int x, y;

    void Move(int xa, int xy)
    {
        x += xa;
        y += xy;
    } 
};

// polymorphism is the idea of having multiple types for a single type

class Player : public Entity // player class now inherited from entity so anything that is not private in Entity is accessible by player
// so we can use player wherever we want to use entity
// player is superset of entity
// we can even overwrite a method of entity inside player
{
public:
    const char* Name;

    void PrintName()
    {
        std::cout << Name << std::endl;
    }
}; 

int main()
{         
    std::cin.get();
} 