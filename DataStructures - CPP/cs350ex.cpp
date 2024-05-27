#include <iostream> // Include the iostream library for input/output operations
#include <cstdlib> // Include the cstdlib library for standard library functions like rand and srand
#include <ctime> // Include the ctime library for time-related functions

using namespace std;

// Function to allocate memory for a matrix of random integers
int** matrixRandom(int m, int n) {
    int** matrix = new int*[m]; // Allocate memory for an array of pointers (rows)
    for (int i = 0; i < m; i++) { // Loop through each row
        matrix[i] = new int[n]; // Allocate memory for each row (columns)
        for (int j = 0; j < n; j++) { // Loop through each column in the row
            matrix[i][j] = std::rand() % 100; // Initialize with a random integer in the range 0-99
        }
    }
    return matrix; // Return the pointer to the matrix
}

// Function to calculate the sum of the diagonal of a matrix
int matrixDiagonal(int** matrix, int m) {
    int diagonalSum = 0; // Initialize the sum of the diagonal to 0
    for (int i = 0; i < m; i++) { // Loop through each row (and column, because it's a square matrix)
        diagonalSum += matrix[i][i]; // Add the diagonal element to the sum
    }
    return diagonalSum; // Return the sum of the diagonal
}

int main(int argc, char* argv[]) {
    if (argc != 3) { // Check if the number of command line arguments is not 3
        cout << "Please input command line arguments for m and n" << endl; // Print an error message
        return 1; // Return an error code
    }

    int m = stoi(argv[1]); // stoi function Converts the first command line argument from string to an integer (number of rows)
    int n = stoi(argv[2]); // stoi function Convert the second command line argument from string to an integer (number of columns)

    if (m != n) { // Check if the matrix is not square
        cout << "Matrix is not square! Cannot get the diagonal..." << endl; // Print an error message
        return 1; //Here we use a 1 instead of break or continue as these functions only work in loops
    }

/* WE SEED THE RANDOM NUMBER GENERATOR WITH THE CURRENT TIME IN ORDER TO GET DIFFERENT 
RANDOM NUMBERS EVERYTIME WE GENERATE
*/
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));

    // Create a random matrix //we use douhle ** here in order to allow dynamic memory allocation 
    //declares pointer to the pointer of a integer -
    int** matrix = matrixRandom(m, n);

    // Calculate and print the sum of the diagonal
    int diagonalSum = matrixDiagonal(matrix, m);
    cout << "Sum of the diagonal: " << diagonalSum << endl;

    // Clear memory
    for (int i = 0; i < m; i++) { // Loop through each row
        delete[] matrix[i]; // Delete the memory allocated for each row
    }
    delete[] matrix; // Delete the memory allocated for the array of pointers

    return 0; // Return 0 to indicate successful execution
}