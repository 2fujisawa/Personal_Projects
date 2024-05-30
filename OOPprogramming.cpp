#include <iostream>
#include <cstdlib>

#include "encapsulation.h"
#include "abstraction.h"

using namespace std;


class Employee:abstraction //we have to define the abstracted class here as it was virtually voided
{

private: //access modifier
    string Name; //nonstatic member variables
    int Age;
    char Gender;
    bool Promotion;
    int Points;

public: //access modifier

    //Constructors
    Employee(string name, int age, char gender)
    {
        Name = name;
        Age = age;
        Gender = gender;
        Promotion = false; //We cannot initialize these in the nonstatic member variables, so always initialize them in the constructors
        Points = 0;

    }

    void introduction()
    {
        cout << "My name is "<< Name << endl;
        cout << "I am "<< Age << " years old" << endl;
        cout << "I am " << Gender << endl;
    }

    void promotion()
    {
        if(Age > 20)
        {
            Points = Points + 1;
        }
        else
        {
            cout << "Sorry you're under the age of 20 you cannot get promoted\n";
        }

        if(Points == 1)
        {
            Promotion = true;
            cout << "Did you get a promo? " << boolalpha <<(Promotion) << endl;
        }

    }

};

int main()
{
    Employee Employee1 = Employee("Xazli", 21, 'M'); //Asssigning variables through the constructor 


    encapsulatedemployee encap1; //assigning encapsulation class with a variable

    encap1.setname("Jgolebiows"); //assigning variable for abstraction
    encap1.setage(21); //assigning variable for abstraction

    cout << encap1.getname() << " is " << encap1.getage() << endl;//Using Encapsulation here

    Employee1.introduction(); //using void function in the Employee function of the class
    Employee1.promotion(); //using promotion function in the abstraction class that we brough over using virtual voids
}