#include <iostream>
#include <string>

using namespace std;

int main()
{
/*switch statement*/
int x;
int y;

cout << "Enter first number to add up to 10: ";
cin >> x;

cout << "Enter the second number to add up to 10: ";
cin >> y;

int sum = (x + y);

switch (x + y)
{
case 10: //checks if the switch statment is equal to the case and if so it will run whatever code you put after the colons :
    cout << "You got the answer 10" << endl;
    break;

default: //default value if you didn;t get the case number
    cout << "You didn't get the answer 10" << endl;
    break;
}

/*strings and .length*/
string str = "Hello this is a string";
string arr[22];

for(int t = 0; t <= str.length(); t++) //or we can use .size() both serves ths same purpose
{
    cout << str[t];
}

cout << endl;

for(int t = 0; t <= str.size(); t++) // assiging the values from str to the arr array
{
    arr[t] = str[t];
    cout << arr[t];
}

}
