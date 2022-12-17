#include <iostream>
#include <string>

using namespace std;

//going to be using this to display play menu

void playMenuSelect();

int main()
{
    playMenuSelect();   //call function for user to select menu option

    int userPlaySelect{ };
    cin >> userPlaySelect;

    if (userPlaySelect == 1)        //later to change to move to diffeerent files for game
    {
        cout << "New game starting" << '\n';
    } else if(userPlaySelect == 2)
    {
        cout << "Continuing to existing game" << '\n';
    } else if(userPlaySelect == 3)
    {
        cout << "Going back to main menu" << '\n';
    } else
    {
        cout << "Invalid selection. Please try again." << '\n';
    }

    return 0;
}

void playMenuSelect()  //allows users to select from play menu
{
    cout
    << "1.) New Game" << '\n'
    << "2.) Continue" << '\n'
    << "3.) Back" << '\n'
    << "Selection: ";
}