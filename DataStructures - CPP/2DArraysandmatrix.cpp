#include <iostream>
//not finished
using namespace std;

void arrayusingpointer(int row, int array[])
{

    for(int i = 0; i < row; i ++ )
    {
        array[i] = i + 1;
        cout << &array[i]  <<  " =  " << array[i] << endl;
    }
}

int main()
{
    int array[10] = {};
    int matrix[3][5] = {{1,2,3,4,5}, {5,4,3,2,1}, {10,6,7,8,9}};


//We can understand here that just using array by itself it acts as a pointer to the first element, however, when we use & percant 
//it points to the array as a whole
    cout  << array << endl << array + 1 << endl << &array << endl << &array + 1 << endl;
    

    cout << "Address of the matrix:" << matrix << endl;
    cout << "Address of the &matrix:" << &matrix << endl;

    cout << "The memory address at this matrix is " << &matrix[1][0] << " which is the same as " << matrix[1][0] << endl;
    cout << " Value in the address of the matrix:" << matrix[1][1] << endl;
    cout << **(&matrix[1] + 1) << endl;


    arrayusingpointer(10,array);

}
