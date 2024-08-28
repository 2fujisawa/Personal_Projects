#include <iostream>
#include "naivestackheader.h"


naivestackheader :: naivestackheader(int size) //Constructor initializing the naivestackheader class and declaring function inside of it
{
    array = new char[size];
    max = size;
    count = 0;
    top = -1;
}

naivestackheader :: ~naivestackheader()
{
    delete[] array;
}

bool naivestackheader :: isFull() //Checks if the stack is full and if so returns value of max
{
    return (count == max);
}

bool naivestackheader :: isEmpty() //Checks if the stack is empty and if so it returns value 0
{
    return (count == 0);
}

int naivestackheader :: size() //checks the size of the stack
{
    return count;
}

void naivestackheader :: push(char character) //method that adds a acharacter to the top of the stack 
{
    if(isFull())
    {
        char* temp = new char[2*max]; //if stack is full it doubles the size of the stacks array
        for(int i = 0; i < max; i++)
        {
            temp[i] = array[i]; //Copies the elements to the new array
        }

        max *= 2; //updating the maximum size
        delete[] array; //deallocates the memory used by the old array
        array = temp; //updates the pointer array to point to the new array temp
    }

    top = top + 1;
    count++;
    array[top] = character; // assigns new element
    
}

char naivestackheader::pop() //removes the top element the array/stack
{
    char topelement = array[top]; //declares the first element in the top of the array
    top = top - 1; //deincrements the top element by 1
    count--;

    return topelement; //returns the current top elemennt then decrement top
}

char naivestackheader::peek(){ //peeks the first element in the top of the array
    return array[top];
}

string naivestackheader::printstack() //prints the entire stack
{
    string stack;
    for (int i = 0; i <= top; i++) 
    {
         array[i];
         stack = stack + array[i];
    }

    return stack;
}
