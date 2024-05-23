//SYNTAX I NEED TO LEARN FOR DATA STRUCTURES

//Source File
#include <iostream> //preprocessor statement
#include <cstring>

#include "message.h" //Including a header file
#include "math.h" // include another header file
#include "increment.h"

using namespace std; 

int main() //entry point 
{

/* Practicing using functions using header files */
    Log("Hello this is the welcome message, we are printing this through inputting it through the function in the header file");
    
    int a,b;
    cout << "Lets add two numbers together: \nEnter the first number you want to add - ";
    cin >> a;
    cout << "Enter the second number you want to add - ";
    cin >> b;
    cout << "Your total is " << add(a,b) << endl;


/*Practice Pointers and References using headers*/
    int number = 8;
    int *pointer = &number; 
    
    cout << "The value in the memory address of " << &number << " is "<< *pointer << endl; //*dereferences pointer and gives the value at the memory address


//Reference - we use int& at the data type which 
    int exampleref = 1;
    int& reference = exampleref; //alias since the & is on the data type the variable reference is going to be a references
    reference = 10; // Sets exampleref's equal to the reference and allows it to modify both of them

    cout << reference <<endl;
    Increment(&exampleref);//increments the address at the variable address


    //we use memory allocation on the heap since we have manual control over when to delete the memory instead of instantly deleting it after a function ends
    char* memory = new char[10]; //allocates size of 10 bytes of memory onto the heap and sets the pointer to the beginning of that memory
    memset(memory, 1, 10); //sets first 10 bytes of the array - memory to the number 1

    char** doubleptr = &memory; //we use a double pointer example here to show that we can use pointers twice and it points to the memory

    cout << "The first value in the (memory) adress is " << static_cast<int>(**doubleptr) << " we have the address of "<< doubleptr << " Which is the same address as " << &memory<< endl; //The static_cast<int> converts the char array into a int so the char is printable

    delete[] memory;//delete the memory allocation of the variable memory



}