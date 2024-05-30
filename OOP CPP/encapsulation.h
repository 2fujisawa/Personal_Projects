//ENCAPSULATION SETTERS AND GETTERS
#include <iostream>
#include <cstdlib>

using namespace std;

class encapsulatedemployee
{
    private:
        string Name; 
        int Age;
        char Gender;

    public:
    
        void setname(string name) //passing in argument called name
        {
            Name = name; //setting it to the variable Name
        }
        string getname()
        {
            return Name; //returning assigned variable
        }

 
        void setage(int age)
        {   
            Age = age;
        }
        int getage()
        {   
            return Age;
        }


};


