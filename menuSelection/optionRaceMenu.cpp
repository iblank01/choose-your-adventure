#include "optionRaceMenu.h"
#include <iostream>
#include <string>

using namespace std;

int raceMenuSelect()
{
    int userRaceSelect{ };

    cout
            << "Pick your race to begin your adventure!\n"
            << '\n'
            << "1.) Human" << '\n'
            << "2.) Elf" << '\n'
            << "3.) Dwarf" << '\n'
            << "4.) Hedgehog" << '\n'
            << "Selection: ";
    cin >> userRaceSelect;

    return userRaceSelect;
}