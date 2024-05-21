#include <iostream>
#include <string>

using namespace std;

//These notes has lot to do with memory 

int main()
{
/*references - just refers to the same memory address when using & */

int a = 1;
int &b = a;

bool x = true; //must initialize 
bool &y = x; //must initialize references and can't use NULL

a = 10;
y = false;

cout << "Values: " << a << "," << b << "," << x << "," << y; //remember 0 is false and 1 is true when it is boolean values

/*pointers - stores to a specific memory adddress location in other terms pointing to some place in memory * */
int pointer = 100;
int *pp = &pointer; //you need a &percant before using pointer since we need a memory address location

string *pointy; //declaring empty pointer

cout <<endl << *pp << endl << pp << endl; //shows the value in the memory address of teh pointer and then shows the memory address of the pointer
cout << &pointy; //different memory address


//arrays using pointers
string array[] = {"1","2", "3", "4", "5"};

string *memory = array;
int arraySize = sizeof(array)/sizeof(array[0]); //creates the size of the array since in c++  arrays connot use .length() or .size() for them


for(int i = 0; i < arraySize; i++)
{
    cout << endl << *memory;// this is pointing to value in each of the memory address 
    cout << " The memory address is constantly being reassigned to the pointer: " << &array[i];
    cout << " The pointer memory address is still: " << &memory;
    memory = memory + 1;
}




}


