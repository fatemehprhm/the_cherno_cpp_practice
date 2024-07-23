#include <iostream>

// virtual functions allow us to override methods in subclasses
// we got two classes A & B, B is derived from A, meaning B is sub class of A
// if we create a a method in A class and mark it as virtual we have the option of overriding that method in B class

class Entity
{
public:
    virtual  std::string GetName(){ return "Entity";} // *
};

class Player : public Entity
{
private:
    std::string m_name;

public:
    Player(const std::string& name)
        : m_name(name) {}
    
    std::string GetName() override {return m_name;} // *
}; 

int main()
{   
    Entity* e = new Entity();
    std::cout << e->GetName() << std::endl;

    Player* p = new Player("fati") ;
    std::cout << p->GetName() << std::endl; 

    // virtual functions introduce sth called dynamic dispatch which compiler implement via v table
    // v tbale is a table which contains mapping of all the virtual functions inside our base class
    // so we can actually map them to the correct overwritten function at runtime

    Entity* entity = p;
    std::cout << entity->GetName() << std::endl; 

    // so all we need to know is that if you want to overwrite a function you have to mark the base function
    // in the base class as virtual

    // virtual functions do cost a little more memmory and performance

    std::cin.get();
}  