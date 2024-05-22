//SYNTAX I NEED TO LEARN FOR DATA STRUCTURES

//Source File
#include <iostream> //preprocessor statement
#include "preDSAmessage.h" //Including a header file
#include "preDSAmath.h" // include another header file

using namespace std; 

int add(int a, int b); //same goes here same to the top function. Makes code easier to read
void Log(const char* message); // We don't actually need this function call here since we already called it in the header file. But if we didn't include the header file this would be necessary

int main() //entry point 
{
    cout << add(1,2) << endl;
    Log("Hello");
}