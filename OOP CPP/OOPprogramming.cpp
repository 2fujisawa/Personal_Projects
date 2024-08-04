#include <iostream>
#include <cstdlib>

#include "encapsulation.h"
#include "abstraction.h"

using namespace std;

//Parent Class, Superclass, Base Class
class Employee:abstraction //we have to define the abstracted class here as it was virtually voided
                            //This also means that the Employee class has a contract with the class abstraction
{
    private: //access modifier
        int Age;
        char Gender;
        bool Promotion;
        int Points;
    
    protected://Allows access to the variables even in the derived classes, child class
         string Name; //nonstatic member variables


public: //access modifier

    //Constructor - Special type of method that is invocked, has the same name as the class //Doesn't have a return type 
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

         virtual void work() // We will use virtual function - Allows you to check if there is implementation of the functions in the other classes and gives priority to those functions
    {
        cout << endl << Name << " will hopefully be promoted next year... ";
    }

//Abstraction
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
}; //End of Employee Class 

//Inheritance
class developer:public Employee //Child Class, DERIVED Class, Subclass, Inheriting from the Employee class
{                               //You must declare her ethat the clas you are inherting is public so it can be accessed and the constructor can also be propoperly utilized
    public:
        string FavProgrammingLanguage;

        developer(string name, int age , char gender, string favprogramminglanguage): Employee(name, age, gender) //Here we bring in the constructor from the employee class using :
        {
            FavProgrammingLanguage = favprogramminglanguage;
        }

        void language() //You are able to use the protected access modifiers variable
        {
            cout << Name << "'s" << " favorite programming language is " << FavProgrammingLanguage;
        }
    
        void work()
        {
            cout << endl << Name << " will hopefully be promoted next year... ";
        }

        
};

class teacher:public Employee
{
    public:
        string Subject;

        teacher(string name, int age , char gender , string subject): Employee(name, age, gender) //creating another constructor inheriting the previous variables from teh Employee class
        {
            Subject = subject;
        }

        void preparelesson()
        {
            cout << endl << Name << " is preparing a lesson for " << Subject << endl ;
        }

        void work()
        {
            cout << endl << Name << " will hopefully be promoted next year... ";
        }

};

int main()
{
    Employee Employee1 = Employee("Xazli", 21, 'M'); //Asssigning variables through the constructor 
    //ABSTRACTION
    Employee1.introduction(); //using void function in the Employee function of the class
    Employee1.promotion(); //using promotion function in the abstract class that we brough over using virtual voids
    //ABSTRACTION

    // ENCAPSUALTION
    encapsulatedemployee encap1; //assigning encapsulation class with a variable
    encap1.setname("Jgolebiows"); //assigning variable using encapsulation
    encap1.setage(21); //assigning variable using encapsulation
    cout << encap1.getname() << " is " << encap1.getage() << endl;//Using Encapsulation to get value here
    //ENCAPSULATION


    //INHERITANCE
    developer Dev1 = developer("Terry", 20, 'M', "Java"); //inputting into the constructor amde in the developer class
    Dev1.language();

    teacher teacher1 = teacher("Jasmine", 25 , 'L', "Math");
    teacher1.preparelesson();
    //INHERITANCE

    // POLYMORPHISM - When a parent class reference is used to refer to a child class object
    //Employee1.work();
    Employee polymorphism1 = Dev1;
    Employee *polymorphism2 = &teacher1; //Using pointers and &

    polymorphism1.work(); 
    polymorphism2 -> work(); //Using Dereference and Pointers -> also means ((*polymorphism2).work())


}