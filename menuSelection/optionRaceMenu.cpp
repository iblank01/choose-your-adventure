#include "optionRaceMenu.h"
using namespace std;

struct userDetails
{
    int userHealth = 0;
    int userStrength = 0;
    int userSpeed = 0;
};

int raceMenuSelect()
{
    int userRaceSelect{ };

    cout
    << "Pick your race to begin your adventure!" << '\n'
    << "1.) Human" << '\n'
    << "2.) Elf" << '\n'
    << "3.) Dwarf" << '\n'
    << "4.) Hedgehog" << '\n'
    << "Selection: ";
    cin >> userRaceSelect;

    //now calculating race stats
    //creating instance of userDetails struct
    userDetails user1;

    if (userRaceSelect == 1)                                //reference struct vars to change based on userRaceSelect
    {
        //human race stats
        user1.userHealth = 12;
        user1.userStrength = 5;
        user1.userSpeed = 4;

        cout << "\nYou have selected: "
             << "Human" << '\n';

        cout << "Stats " << "\n"                            //each access members of the struct
             << "Health: " << user1.userHealth << '\n'
             << "Strength: " << user1.userStrength << '\n'
             << "Speed: " << user1.userSpeed << '\n';

    } else if (userRaceSelect == 2) {
        //elf race stats
        user1.userHealth = 6;
        user1.userStrength = 4;
        user1.userSpeed = 4;

        cout << "\nYou have selected: "                     //begin displaying selection
             << "Elf" << '\n';
        cout << "Stats " << "\n"                            //repeat of steps for human race
             << "Health: " << user1.userHealth << '\n'
             << "Strength: " << user1.userStrength << '\n'
             << "Speed: " << user1.userSpeed << '\n';

    } else if (userRaceSelect == 3) {
        //dwarf race stats
        user1.userHealth = 15;
        user1.userStrength = 6;
        user1.userSpeed = 2;

        cout << "\nYou have selected: "                     //repeat of steps for previous races
            << "Dwarf" << '\n';
        cout << "Stats " << "\n"
            << "Health: " << user1.userHealth << '\n'
            << "Strength: " << user1.userStrength << '\n'
            << "Speed: " << user1.userSpeed << '\n';

    } else if (userRaceSelect == 4) {
        //hedgehog race stats
        user1.userHealth = 10;
        user1.userStrength = 3;
        user1.userSpeed = 6;

        cout << "\nYou have selected: "                     //repeat of steps for previous races
             << "Hedgehog" << '\n';
        cout << "Stats " << "\n"
             << "Health: " << user1.userHealth << '\n'
             << "Strength: " << user1.userStrength << '\n'
             << "Speed: " << user1.userSpeed << '\n';

    } else
    {
        cout << "Invalid selection. Please try again." << '\n';
    }

    return userRaceSelect;
}