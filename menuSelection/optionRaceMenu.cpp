#include "optionRaceMenu.h"
using namespace std;

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
    int userHealth{};
    int userStrength{};
    int userSpeed{};

    if (userRaceSelect == 1)
    {
        userHealth = 12;
        userStrength = 5;
        userSpeed = 4;

        cout << "\nYou have selected: "
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
    return userRaceSelect;
}