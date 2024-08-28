#include <iostream> //input output library
#include <vector>

//typedefs are now used by the using keyword as it is easier to read
typedef std::string string_t; //typedefs are just name interchangeable data types Ex.Here instead of typing this line of std::string everytime we can just use string_t as a string 
typedef int number_t; //old


//now using
using string_t = std::string;//new
using number_t = int;


namespace first{ //namespace = A place to set and organize variables, we can use entities from here by calling it in other fuctions
    int num = 1; //we are using the variable num again also known as a entity in this situation since we are using a namespace
    std :: string example = "example"; //we cannot have executable code in the namespace such as if else statments we can only create and assign datatypes and variables in here
}

int main()
{
    using namespace first; //We can also use this to use the namespace freely throughout a function *easier method however in this scenario the namespace first will be ignored as the local variable is being declared so it will take over priority

    int num = 2; //integers 
    double d = 2.2; //doubles
    char c = 'W'; //chars 
    bool lifeisgood = true; //booleans
    std :: string examplestring = "Hello"; //string 

    /* In C++ we use the part "std" as a namespace which are basically grouping naming entities such as classes, objectsm and functions under a distinct name. 
        - helps us avoid conflicts in a large programs 
        - basically just mentioning that we are using the iostream library in this line of code
    */

    std :: cout << "Welcome to the C++ Projects" << std:: endl; //Printing here we use the "<<" in order to print out multiple data items in one line
    std :: cout << "Lets try this " << "programming assignment "; // prints the next sentence after ending the previous line

    std :: cout << "An example of a double is " << d << "\n" << c << " Is a example of a char" << "\nHere is a example string " << examplestring << "\n";
    std :: cout << std::boolalpha << "Is life good? " << lifeisgood << std :: endl; //enable boolalpha library so the output is true or false instead of 1s and 0s
    std :: cout << std::noboolalpha;  // Disable boolalpha

    //namespace usage example 
    std :: cout << first :: num; //The two colons are known as the scope resolution operator in this scenario we are taking the namespace called first and using the variable called num
    std :: cout << num; //declaring num variable but ignores using namespace first since the local variable is declared

    return 0; //returns 0 if the program runs and 1 if error has been faced
}