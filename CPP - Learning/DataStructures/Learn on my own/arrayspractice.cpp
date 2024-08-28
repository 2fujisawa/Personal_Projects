//Practicing Searching, Inserting, and Deleting of arrays
#include <iostream>
#include <string>
#include <cctype> //tolower function

using namespace std;

//You must allocate memory for the array to be created
template<typename datatype>
void creating_array(datatype *&arr, int size)
{
    arr = new datatype[size]; //memory allocation
}

//Initializing the array so that you put the elements in the array
template<typename datatype>
void initializing_array(datatype *&arr, int size)
{

    for(int i = 0; i < size; i++)
    {
        datatype element;
        cout << "Input the elements you want in the dynamic array: ";
        cin >> element;
        arr[i] = datatype(element); //initializing each element in the arr with the datatype

    }

}

template<typename datatype>
void print_array(datatype *&arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}



int main()
{   
    int size; //size of array
    string type; //type of array

    //declaring integer array pointing to null 

    cout << "Lets create the array size input the size you want: ";
    cin >> size ;

    cout << "Now input the type of array you want: ";
    cin >> type;
    
    
    for(int i = 0; i < type.length(); i++ )
    {
        type[i] = tolower(type[i]);
    }

    if(type == "int")
    {
        int *array = nullptr;
        creating_array(array, size);
        initializing_array(array, size);

        cout << "The current elements in the array are ";
        print_array(array,size);
        delete [] array;
    }

    else if(type == "char")
    {
        char *array = nullptr;
        creating_array(array, size);
        initializing_array(array, size);
        
        cout << "The current elements in the array are ";
        print_array(array,size);

        delete[] array;
    }

    else if (type == "string")
    {
        string *array = nullptr;
        creating_array(array,size);
        initializing_array(array, size);

        cout << "The current elements in the array are ";
        print_array(array,size);
        delete[] array;
    }

    else
    cout << "Unknown data type";



}