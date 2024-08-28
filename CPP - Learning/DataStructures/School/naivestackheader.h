#pragma once

using namespace std;


class naivestackheader
{
    private:
    char* array; //pointer to dunamicaly allocated array of characters, serving as the underlying storage for the stack
    int count; //keeps track of teh current number of items in the stack
    int max; //max number of items that he stack can hold
    int top;//index of top of the stack

    public:
    //functions
    naivestackheader(int size); //initializing constructor here with a maximum size specified with size
    ~naivestackheader(); //creating destructor here to clean up any resouces when the stack object is destroyed freeting dynamically allocated array

    void push(char c); //adds character to top of the stack
    char pop(); //remove from the top
    char peek(); //return to top without removing
    bool isFull();
    bool isEmpty();
    int size(); 

    string printstack();



};
