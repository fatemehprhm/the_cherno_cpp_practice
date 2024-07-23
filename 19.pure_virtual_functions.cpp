#include <iostream>

// pure virtual functions allows us to define a function in a base class that does not have an implementations
// and then force subclasses to actually implement that function

class Entity
{
public:
    virtual  std::string GetName() = 0; // in some cases it doesnt make sense to provide this default implementations
    // we might want to force the subclass to provide its own definition for a certain function\
    // by = 0 means it has to be implemented in subclass
};

class Player : public Entity
{
private:
    std::string m_name;

public:
    Player(const std::string& name)
        : m_name(name) {}
    
    std::string GetName() override {return m_name;}
}; 

int main()
{   
    Entity* e = new Player(""); // you can only instantiate the class only if it has all those pure virtual functions implemented
    std::cout << e->GetName() << std::endl;

    Player* p = new Player("fati") ;
    std::cout << p->GetName() << std::endl; 

    Entity* entity = p;
    std::cout << entity->GetName() << std::endl; 

    std::cin.get();
}  