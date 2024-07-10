#include <iostream>
#define LOG(x) std::cout << x << std::endl

// pointer are important for managing & manipulating memory
// a pointer is an interger, a number which stores a memory address
// imagine that memory in your computer is one big line and every house in that line is 1 byte and have an address

int main()
{ 
    int var = 8; 
    // void* ptr = 0;  // void* means a typeless pointer, and pointer is just an integer that address the memory it doesnt need a type
    // if we give a pointer a type we are just saying the data at that address is persumed to be the type that we give it 
    // now 0 here means that we have given this pointer a memory address of zero, but zero isnt valid memory address
    // which means that this pointer is not valid and it is acceptable state for a pointer so 0 here mean NULL and we can write like this:
    // ptr = NULL or nullptr
    int* ptr = &var;  // if i use & in front of an exisitng variable we are asking variable what is your address in the memory
    // and assigning it to a new variable ptr
    // it doesnt differ it i use any other type instead of void

    *ptr = 10;// this is called dereferencing the pointer which means that now im accessing the data and i can read from or write to.

    char* buffer = new char[8]; // i ask for 8 bytes of memory and this command allocated 8 bytes for us and
    // is returning a pointer to the beginning of that block of memory
    memset(buffer, 0 , 8); // this function fills the block of memory with data that we specify, it takes in pointer to that block of memory, 
    // then it takes value exp 0, and it takes size of how many bytes should it fill

    // pointers are just variables so they take place in memory too so we can create a double pointer that is pointer that points to another pointer
    char** ptr2 = &buffer;

    delete[] buffer;

    std::cin.get();
}

