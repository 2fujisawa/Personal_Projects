#pragma once
 
 #include <iostream>
 using namespace std;


 void Increment(int* value)
 {
    cout << value;

    (*value)++;
    cout << *value << endl;
 }