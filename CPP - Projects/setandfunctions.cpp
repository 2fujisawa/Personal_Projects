//SETS - Unordered collection of unique elements
//Functions - A group of code that is reusable able to pass in arguments and be reused
#include <iostream>
#include <set>
#include <string>

using namespace std;

int calculate(int x, int z) // we have to define the returning value/data type of the function
                // we are going to pass in two arguments into the parameter of the function
{   
    return x + z;
} 

void noreturn() //don't have to return anything so no labeling datatypes
{
    for(int i = 0; i < 10; i++)
    {
        cout << i;
    }

}

void printingntimes(int length, string s) //taking in two arguments int and string and printing mutliple times
{
    for(int i = 0; i < length; i++)
    {
        cout << s << " ";
    }
}

int main() //special function
{

    set<string> s1 = {" lets ", " try ", " this ", " set "};
    s1.insert(" hello ");
    s1.erase(" this ");

    for(auto itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr; // sets print unorderly fashion even though it is a collection just like maps and vectors
    }

    cout << endl;

    //Using a set to check if all the letters were used in a sentence
    string sentence = "This is a test";
    string find = "test";
    set<char> exists= {}; //setting the exists set empty

    for(int i = 0; i < find.size(); i++) //looping through the characters we want to find and putting them in a set
    {
        char letter = find[i]; 
        exists.insert(letter);
    }

    for(int i = 0; i < sentence.size(); i++) //removing the letters found in the sentence from the set
    {
        char letter = sentence[i];
        exists.erase(letter);
    }

    //If the set is empty then all letters were found
    if(exists.size() > 0)
    {
        cout << "Not all letters were not found.";
    }
    else    
    {
        cout <<"All the letters were found";   
    }

    //Function called in main 

    int final = calculate(2,19); // function call through 2,19 being the argumentss
    cout << endl << final << endl;

    noreturn();
    cout << endl;

//printingntimes
    string inputstring; 
    cout << "Input the string you want to repeat 10 times: ";  cin >> inputstring; 

    printingntimes(10, inputstring);

    }
    


    