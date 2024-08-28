//STACK - LIFO Behavior Last in First Out
#include <iostream>
#include <stack>
#include "naivestackheader.h"

using namespace std;


int main()
{ //push , pop, peek, empty, size, top

naivestackheader mystack(100);
mystack.push('L');//1
mystack.push('i');//2
mystack.push('n');//3
mystack.push('u');//4
mystack.push('s');//5

cout  << "The current stack size is : " << mystack.size() << "  The last Character in the array is: " << mystack.peek() << endl; //printing size of the array and the last character in the stack
cout  << "The full stack is: "<< mystack.printstack() << endl; //prinitng entire array

while(!mystack.isEmpty())
{
    cout << "We are pooping the letter: " << mystack.pop(); //
}

cout << endl << "My final stack size is : " << mystack.size();

}