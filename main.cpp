#include "main.h"
using namespace std;

void MainMenuSelect();

int main()
{
    cout
    << "Welcome to Choose Your Adventure!" << '\n';
    
    MainMenuSelect();                                                   //provides user menu to select from
    int UserMainSelect{ };                                              //initializes variable to store user select.
    cin >> UserMainSelect;

    switch (UserMainSelect)                                            //switch to filter user input
    {
        case 1:
            cout << '\n' << "You decide to play the game." << '\n';     //displays play menu selection (confirmation)
            playMenu();
            break;

        case 2:
            cout << "Here is the settings menu\n" << '\n';              //displays settings menu selection (confirmation)
            settingsSelect();
            break;

        case 3:
            cout << "Deciding to quit already? Okay\n" << '\n';
            break;

        default:
            cout << "Invalid selection. Please try again.\n" << '\n';
            break;

    }
    //send user to areaDarkForest.cpp

    return 0;
}

void MainMenuSelect()                                                   //allows users to select from main menu
{
cout
<< "1.) Play" << '\n'
<< "2.) Settings" << '\n'
<< "3.) Quit" << '\n'
<< "Selection: ";
}