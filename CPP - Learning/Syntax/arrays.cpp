#include <iostream>
#include <string>

using namespace std;

//Arrays : DATA STRUCTURE: Allows us to store multiple values we will learn this soon
int main()
{
    //Arrays have elements and are all gonna be same data type, size of array cannot be changed once made would have to make a new one
    int ar[5]; //going to declare the empty array with defined size of 5 in a random place in memory location since we are not initializing the values in the array
    int arr[] = {1,2,3,4};

    string aray[] = {"hello", "This", "is", "an", "array"};

    cout << arr[3] << endl;//indexing and printing 3rd value in arr3[]
    cout << aray[4] << endl << sizeof(aray) << endl;

    /*for loops*/
    string aray2[] = {"1", "2", "3", "4", "5"};
    int numaray[] = {1,2,3,4,5};

    for(int i = 0; i <= 4; i++) 
    {
        cout << aray2[i]; //prints the strings
        cout << numaray[i]; //prints the integers from array

    }

    /* while loops */
    int test;
    while(true)//keeps looping over and over until it breaks
    {
        cout << endl << "Enter a number: either 1 or 2: ";
        cin >> test;

        if(test == 1 || test == 2)
        {
            cout << "You got the answer either one or two";
            break; //break out of the closest loop
        }

        if(test == 5 || 10)
        {
        
          cout << "You are going to loop through the code skipping number 5 and 10";
          continue;  //You are just going to continue the loop skipping whatever iteration you are on
        }

    }








}