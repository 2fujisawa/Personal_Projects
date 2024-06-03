//TEMPLATE - makes functions/methods detects datatype automatically
#include <iostream>

using namespace std;

template<typename T> //automatically detects the datatype being used when argument is put into the parameter
                    //Only gets created when called

void test(T value) //template function
{
    cout << value;
}

template<typename C> //Class template
class calculator
{
    private:
    int total;

    public:

    void add(C number1, C number2)
    {
        total = number1 + number2;
        cout << "The added numbers are " << number1 << " and " << number2 << " = " << total << endl;

    }
    void substract(C number1, C number2)
    {
        total = number1 - number2;
        cout << "The subtracted numbers are " << number1 << " and " << number2 << " = " << total;

    }

};

int main()
{

    test<string>("We are testing templates\n"); 
    cout << "The lucky number is : ";
    test(2); //don't have to specify angular brackets
    cout << endl;
    calculator<int> inttemplatecalculator;
    calculator<float> floattemplatecalculator;

    inttemplatecalculator.add(5, 10);
    floattemplatecalculator.substract(5.2,2.2);

}