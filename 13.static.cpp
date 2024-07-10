#include <iostream>
// static keyword in c++ has two meaning
// 1. when you use static keyword outside of class
// means that linkage of the symbol that you declared to be static is going to be internal
// means it going to be visible only to that translation unit (it can be variable or function)
// 2. when you use it inside class or struct
// means that variable is going to share memory with all of the instances of that class  
// means across all instances that you create of that class or struct, there is only going to be one
// instance of that, and a similar thing applies to static methods in a class
// so in variable case, if i make a class called entiy and i keep making entity instances
// meaning if one of those instances changes my static variable its going to reflect that change across all instances


// extern int x; // extern means that its going to look for that variable in an external translation unit
// which is called external linkage or external linking

// struct Entity {
//     int x,y;

//     void Print()
//     {
//         std::cout << x << ", " << y << std::endl;
//     }
// };

// int main()
// {                
//     Entity e;
//     e.x = 7;
//     e.y = 8;

//     Entity e1 = {9, 4}; // we initialize it here   

//     e.Print();
//     e1.Print(); 
//     std::cin.get();
// } 


struct Entity {
    static int x,y; // its like we have made two variables that are inside a namespace called entity
    // they dont really belong to the class

    static void Print()
    {
        std::cout << x << ", " << y << std::endl; // static methods cant access not static variables so code will break if we make x & y non static
        // the reason is that a static method does not have a class instance
        // static method is as same if you wrote that method outside of the class
    }
};

int Entity::x;
int Entity::y;


int main()
{                
    Entity::x = 7;
    Entity::y = 8; // its like we do this: e.y = 8

    Entity::x = 9;
    Entity::y = 4; // its like we do this: Entity::y = 4

    Entity::Print();
    Entity::Print(); 
    std::cin.get();
} 