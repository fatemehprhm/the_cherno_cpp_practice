#include <iostream> // preprocess statement they happen ust before main program
// include will find a file, take all of the contents of that file  and paste it into the current file, 
// the file that we include is called header file.

int main() //entry point for  our application
// means when we run our app our computer execute the code that begins in this function
// you donthave to return any kind  value from the main function and its special case. if you
// dont return anything it will assume you are returning zero
{
    std::cout << "hello world" << std::endl;
    std::cin.get();
    // The std is a short form of standard, the std namespace contains the built-in classes and declared functions. 
    //You can find all the standard types and functions in the C++ "std" namespace. 
    //There are also several namespaces inside "std."
}

// header file dont get compiled just cpp files
// each cpp file will get compiled into sth called object file so when we want to sticth them together
// we use linkers to stich obj files together