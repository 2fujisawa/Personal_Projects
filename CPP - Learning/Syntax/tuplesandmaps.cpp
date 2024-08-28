#include <iostream>
#include <string>
#include <tuple>
#include <map>

using namespace std;

int main()
{
//TUPLES - TUPLES CANNOT BE LOOPED USING FOR AND WHILE LOOPS
    tuple <int, string, char> person(20 , "justin", 'l'); //indicating that the first item in the tuple will be a int, second string, and then char , then name the tuple in this scenario person 
    cout <<"Age: "<< get<0>(person) << endl; //how to access items in a tuple use the get function and use angle brackets with the index in it

    //assiging different values in tuples
    get<0>(person) = 21;
    cout <<"New Age: "<< get<0>(person) << endl << endl;

//decompose tuples
   int x;
   string y;
   char z;

   tie(x,y,z) = person;
   cout << "Age: " << x << endl << "Name: " << y << endl << "Gender:" << z;


//MAPS - access elements based on a key not a index has two attributes
//Just like a dictionary it has Key : Value pairs seperated by commas
 //don't care about the order of elements 
 map <char,int> maps = { {'T', 7}, {'L', 10}, {'A', 50} };
 maps['I'] = 100; //adding pair into map

 maps.erase(maps.begin()); // IN MAPS USE THE BALANCED TREE DATA STRUCTURE THEREFORE THE Key:Value pairs are stored  like this 50 at the top 100 on the right node and them 10 and 7 on the left node
                           // Thus in this situation the we are erasing the smallest key in the ordered elements
 //maps.clear(); clears the map

 cout << endl <<  maps['T'] << endl;

 for(auto iterator = maps.begin(); iterator != maps.end(); ++iterator) //using iterator over a collection data structures using auto Ex.Map, sets
 {
    //this line of -> also means (*iterator) which dereferences the iterator 
    cout << iterator -> first << iterator -> second << endl; //we have to dereference the iterator so it becomes a object in other words we are working with the actual value inside of the memory address instead of the memory address itself
 }


}
