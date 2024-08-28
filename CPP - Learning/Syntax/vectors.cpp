//Vectors
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//just like a array, however dynamically change its size, we don't have to define its size when it is initiated 
int main()
{
    vector<int> v1 = {1,2,3};
    v1.pop_back();
    v1.push_back(10); //10 is pushed to the back of the vector
    cout << v1[1] << endl << v1.back() << endl << v1.front() << endl << v1.size() << endl;

//iterating(looping through list, array, vector) through a vector/looping through them
    vector<string> v2 = {"This", "is", "a", "vector"};
     

    for(int i = 0; i < v2.size(); i++)//.length cannot be used since it is not contained in the member of function of the vector library
    {
        cout << v2[i] << " ";
    }

    cout << endl;
    
//placing a specific value into wherever in the vector

v2.emplace(v2.begin() + 3, "example" );//keyword "emplace inserts the value into wherever you need to in the vector"

    //another of iterating through pointers
    for(auto iterate = v2.begin(); iterate != v2.end(); iterate++ )
    {
        cout << *iterate << endl; //pointer dereferences the current iterator and gives the actual value of the memory address
    }
    


}
