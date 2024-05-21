//OOP Object Oriented Programming
#include <iostream>
#include <string>
using namespace std;
//Classes - groups data to organize functionality functions and variables
//Objects is how you access the stuff inside your class


class player //declare class
{
    public: //access specifier allows you to use the functions both inside and outside of the class

    void game()
        {
        while(true)
            {
            cin >> start_game;

            if(tolower(start_game) == 's' ) 
                {
                cout << "The game as started! ";
                break;
                }
                
            else if(tolower(start_game) == 'e')
                {
                cout << "The game has ended!";
                exit(0);
                }
            else
                {
                cout << "The input was invalid please try again: ";
                }
            }
        }

        int health() //function health
        {
            int starting_hp = 100;
            return starting_hp;
        }

        string set_name()
        {
            cout << "Enter the player name: ";
            cin >> nameinput;
        }

        string get_name()
        {
            return nameinput;
        }

    private: //only allows variables to be used within the class and functions within the class and not outside
        string nameinput;
        char start_game; 
    


};


int main()
{
    cout << "Hello welcome to the player maker using classes and objects press s to start and e to end: ";
    player plyr1; //Object - setting the class player to the variable plyr so we can access it

    plyr1.game();
    plyr1.set_name();
    cout << "Hello " << plyr1.get_name() << " welcome to the game. ";
    plyr1.health(); //using dot seperator inside of the variable to specify which function we are using from the player class 
    cout << "Currently you have about " << plyr1.health() << " health.";



    
}