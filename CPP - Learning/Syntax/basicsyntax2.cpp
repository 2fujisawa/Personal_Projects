#include <iostream>
#include <string> //allow strings to be manipulated in different ways such as assignments and concatination

using namespace std; //don't have to keep on defining the standard library over and over std::string blank or std :: cout 


int main()
{

    const int i = 10; // can't use const without defining value
    string n;
    int number;

    cout << "Welcome to the mini tutorial please enter any string and enter to start -> "; 
    cin >> n; //basic input command, make sure to assign data type first 
    cout << "Enter any number: "; 
    cin >> number;

    
    cout << "Your current string is " + n << endl; //can use + here instead of << since we can concatinate same data types together string + string, if different we can't use it 
    cout << "Your current number is " << number << endl; //shouldn't use , here instead of << since if we use it only the last operand would show meaning only the value number will print

/* Arithmetic Operators */
    int sum = (number + i) % 2; //gives us the remainder
    cout << "The remainder is " << sum;

/* Logical Operators !, &&, || */
    bool x = !true; //means not true
    bool y = true;

    cout << endl << x << y << endl; //answer answer is 01 since it is false first and true after

/*if else statments*/
    int t;
    cout << "Enter a number value to assign to t: ";
    cin >> t;

    if(t == 10)
    {
        cout << "You picked the correct number of " << t;
    }
    else if(t < 10)
    {
        cout << "You should've picked a bigger number";
    }
    else
    {
        cout << "Picked a lower number";
    }
    

}