#include <iostream>

using namespace std;

//SIMPLE SEARCH - Retrun the first index of the array that contains the value "key"
//Big O = iterating through entire array and trying to find the key so O=(n)
//Big Omega = "Key" is the first element of the array so Omega(1)

int printarray(int len, int* array)
{
    for(int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }
}

int simplesearch(int len, int key, int* array)
{
    int compared = 0;

    for(int i = 0; i < len; i++)
    {
        if(array[i] == key)
        {
            break;
        }
        else
        {
            compared++;
            array[i + 1];
        }
    }
    cout << endl << "Through simple search, the array was compared " << compared << " times.";
    
}

//We are going to assume that the array is sorted and contains the value "key"
int binarysearch(int len, int key, int* array)
{   
    int right = len;
    int left = 0;
    int comparison = 0;

    while(right >= left) //Loops through the length of the array    
    {
        comparison++;

        int middle = (left + right)/2; //finds the middle value in the array    

        if(array[middle] == key) //checks if the key was found in the array
        {
            break;  
        }    

        if(key < array[middle]) // checks if the key in the array is less than the middle value
        {
            right = middle - 1; //assigns the length of the array to the first value on the left side of the middle value in the array
        }
        else  // checks if the key in the array is greater than the middle value
        {
            left = middle + 1; //assigns the position of the starting point to the value on the first right side of the middle value in the array    
        }
    }

    cout << endl << "Through binary search, the array was compared " << comparison << " times.";


}

int main(int argc, char* argv[])
{
    cout << "Creating array." << endl;

    int len = stoi(argv[1]); //Converting command line arg to int
    int key = stoi(argv[2]);

    //new keyword - allows memory allocation(len amount of bytes into memory) calls constructor
    //Also on the heap
    // free(len)
    //must use delete[] len - calls desturctor as well

    int* array = new int[len]; //points to the first position of the memory address at the new keyword
    for(int i = 0; i < len; i++)
    {
        array[i] = i;
    }

    printarray(len, array);
    simplesearch(len,key,array);
    binarysearch(len,  key, array);

    delete[] array;

}