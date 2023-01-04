#include "optionPlayMenu.h"
//going to be using this to display play menu
void playMenuSelect();

void playMenu()
{
    playMenuSelect();   //call function for user to select menu option

    int userPlaySelect{ };
    cin >> userPlaySelect;

    if (userPlaySelect == 1)        //later to change to move to diffeerent files for game
    {
        cout << "New game starting\n" << '\n';
        raceMenuSelect();
    } else if(userPlaySelect == 2)
    {
        cout << "Continuing to existing game\n" << '\n';
    } else if(userPlaySelect == 3)
    {
        cout << "Going back to main menu\n" << '\n';
    } else
    {
        cout << "Invalid selection. Please try again." << '\n';
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