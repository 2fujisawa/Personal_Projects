#include <iostream>
#include "queueheader.h"

using namespace std;

int main()
{
    queue <char>* thequeue = new queue<char>(10); //initializing the queue object, declaring the datatype
                                                //creating a pointer to the new variable thequque, then allocating memory for queue with size 10;

    thequeue -> add('H');
    thequeue -> add('e');
    thequeue -> add('l');
    thequeue -> add('l');
    thequeue -> add('o');

    cout << "The current queue size is " << thequeue -> arraysize() << endl;


    //You can only use (thequeue.___) onl if you are not using a pointer and have a actual object

    thequeue -> remove(); 
    cout << "The current queue size is " << thequeue -> arraysize() << endl;

    thequeue -> peek(); //dereferences the peek method in the queue class
    cout << "The front of the queue is " << thequeue -> peek() << endl;



    delete[] thequeue;











}