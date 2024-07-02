// #ifndef _log_h // instead of pragma once we can use this approach
// // it first check to see if a symbol called log h is actually defined
// // if its not defined its going to go ahead and include the following code in compilation
// // but in total pragma once is better  
// #define _log_h
// void Log(const char* message); // you  dont have to specify the name of the parameter

// #endif

// #pragma once

void Log(const char* message);