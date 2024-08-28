#pragma once
 
 #include <iostream>
 using namespace std;


 void Increment(int* value) //By using a *(pointer) on the data structure int you are able to 
 //bring in the memory address to this function and modify it in the function

 {
    cout << " The memory address in value is "<< value << endl;//prints the derefenced value

    (*value)++; //We increment the value here but we dereference it and put it in parenthesis to work

    cout << "The incremented and dereferenced value " << value << " is " << *value << endl;
 }