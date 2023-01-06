#include "main.h"
using namespace std;

void mainMenuSelect();

int main()
{
    cout
    << "Welcome to Choose Your Adventure!" << '\n';
    
    mainMenuSelect();                                               //provides user menu to select from

    int userMainSelect{ };                                          //initializes variable to store user select.
    cin >> userMainSelect;

    if (userMainSelect == 1)                                        //run through options to see what the user selected
    {
        cout << "You have decided to play the game." << '\n';       //displays play menu selection (confirmation)
        playMenu();                                                 //calls playMenu function
    } else if(userMainSelect == 2)
    {
        cout << "Here is the settings menu\n" << '\n';              //displays settings menu selection (confirmation)
        settingsSelect();                                           //calls settingsSelect function
    } else if(userMainSelect == 3)
    {
        cout << "Deciding to quit already? Okay\n" << '\n';         //displays quitting option selection (confirmation)
    } else
    {
        cout << "Invalid selection. Please try again.\n" << '\n';   //displays if the user select is invalid
    }

    //put race menu in new game

    return 0;
}

void mainMenuSelect()                                               //allows users to select from main menu
{
cout
<< "1.) Play" << '\n'
<< "2.) Settings" << '\n'
<< "3.) Quit" << '\n'
<< "Selection: ";
}