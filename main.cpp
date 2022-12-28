#include <iostream>
#include <string>
#include "menuSelection/optionPlayMenu.h"
#include "menuSelection/optionRaceMenu.h"

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
        cout << "Here is the settings menu\n" << '\n';
    } else if(userMainSelect == 3)
    {
        cout << "Deciding to quit already? Okay\n" << '\n';
    } else
    {
        cout << "Invalid selection. Please try again.\n" << '\n';
    }

    cout << "Welcome to Choose Your Adventure!\n" << '\n';

    //these allow us to start to utilize user stat and race functionalities
    int userRaceSelect{raceMenuSelect()};
    int userStrength{};
    int userHealth{};
    int userSpeed{};

    if (userRaceSelect == 1)
    {
        userHealth = 12;
        userStrength = 5;
        userSpeed = 4;

        cout << "You have selected: "
            << "Human" << '\n';             //human race; 4 speed, 12 health, 5 strength

        cout << "Stats " << "\n"
            << "Health: " << userHealth << '\n'
            << "Strength: " << userStrength << '\n'
            << "Speed: " << userSpeed << '\n';

    } else if (userRaceSelect == 2) {
        userHealth = 6;
        userStrength = 4;
        userSpeed = 4;

        cout << "\nYou have selected: "
            << "Elf" << '\n';               //elf race; 4 speed, 6 health, 4 strength

        cout << "Stats " << "\n"
            << "Health: " << userHealth << '\n'
            << "Strength: " << userStrength << '\n'
            << "Speed: " << userSpeed << '\n';

    } else if (userRaceSelect == 3) {
        userHealth = 15;
        userStrength = 6;
        userSpeed = 2;

        cout << "\nYou have selected: "
            << "Dwarf" << '\n';             //dwarf race; 2 speed, 15 health, 6 strength

        cout << "Stats " << "\n"
            << "Health: " << userHealth << '\n'
            << "Strength: " << userStrength << '\n'
            << "Speed: " << userSpeed << '\n';

    } else if (userRaceSelect == 4) {
        userHealth = 10;
        userStrength = 3;
        userSpeed = 6;

        cout << "\nYou have selected: "
            << "Hedgehog" << '\n';          //hedgehog race; 6 speed, 10 health, 3 strength

        cout << "Stats " << "\n"
            << "Health: " << userHealth << '\n'
            << "Strength: " << userStrength << '\n'
            << "Speed: " << userSpeed << '\n';

    } else {
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