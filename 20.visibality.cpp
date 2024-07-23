#include <iostream>

// visibility refers to how visible certain members of a class actually are
// private, protected, public
// there is also sth called friend, that when a class is firend of other class it means that it can use private members of that class


// protected means that the class and it subclasses can access the members of that class, 
// in private mode subclasses cant access the members of the base class

class Entity
{
     
};

class Player : public Entity
{
protected:
    std::string m_name;

public:

}; 

int main()
{   

    std::cin.get();
}  