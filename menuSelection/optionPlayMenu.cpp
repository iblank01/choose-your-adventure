#include "optionPlayMenu.h"
using namespace std;

void playMenuSelect();                                              //going to be using this to display play menu

void playMenu()
{
    playMenuSelect();                                               //call function for user to select menu option
    int userPlaySelect{ };
    cin >> userPlaySelect;

    switch (userPlaySelect)
    {
        case 1:
            cout << "New game starting\n" << '\n';
            raceMenuSelect();
            break;
        case 2:
            cout << "Continuing to existing game\n" << '\n';
            //to eventually include save-file functionality
            break;
        case 3:
            cout << "Going back to main menu\n" << '\n';
            break;
        case 4:
            cout << "Invalid selection. Please try again." << '\n';
            break;
    }
}

void playMenuSelect()
{
    cout
    << "1.) New Game" << '\n'
    << "2.) Continue" << '\n'
    << "3.) Back" << '\n'
    << "Selection: ";
}