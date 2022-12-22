#include <iostream>
#include <string>
#include "menuSelection/optionPlayMenu.h"

using namespace std;

void mainMenuSelect();


int main()
{
    cout
    << "Welcome to Choose Your Adventure!" << '\n';


    mainMenuSelect();           //provides user menu to select from

    int userMainSelect{ };      //initializes variable to store user selection from func.
    cin >> userMainSelect;

    if (userMainSelect == 1)    //run through options to see what the user selected from menu
    {
        cout << "You have decided to play the game." << '\n';
        playMenu();
    } else if(userMainSelect == 2)
    {
        cout << "Here is the settings menu" << '\n';
    } else if(userMainSelect == 3)
    {
        cout << "Deciding to quit already? Okay" << '\n';
    } else
    {
        cout << "Invalid selection. Please try again." << '\n';
    }

    return 0;
}

                        //function definitions
void mainMenuSelect()    //allows users to select from main menu
{
cout
<< "1.) Play" << '\n'
<< "2.) Settings" << '\n'
<< "3.) Quit" << '\n'
<< "Selection: ";
}