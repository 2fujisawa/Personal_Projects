#pragma once
#include <iostream>

//Creating Class
template<typename datatype>
class List
{
    public:
    datatype memorydata;
    
    List(datatype data); //Constructor
    ~List(); //Destructor

    List<datatype> *next; //Declaring next as the pointer to the List<datatype>
    List<datatype> *before;

};

//Constructor Implementation 
template<typename datatype>

List<datatype> :: List(datatype data) //constructor
{
    memorydata = data;
    next = NULL;
    before = NULL;
}


//Destructor Implementation
template<typename datatype>
List<datatype> :: ~List() //destructor
{
    next = NULL;
    before = NULL;
}

