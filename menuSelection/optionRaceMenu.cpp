#include "optionRaceMenu.h"
using namespace std;

struct userDetails
{
    string race1 = "Human";
    string race2 = "Elf";
    string race3 = "Dwarf";
    string race4 = "Hedgehog";
    int userHealth = 0;
    int userStrength = 0;
    int userSpeed = 0;

    int userRaceSelect = 0;     //keep track of user's race choice
};

void raceMenuSelect()
{
    userDetails user1;                                          //creating instance of userDetails struct

    cout
    << "Pick your race to begin your adventure!" << '\n'
    << "1.) Human" << '\n'
    << "2.) Elf" << '\n'
    << "3.) Dwarf" << '\n'
    << "4.) Hedgehog" << '\n'
    << "Selection: ";
    cin >> user1.userRaceSelect;

    string userRaceFinal;                                       //for the purpose of storing the race more easily
    switch(user1.userRaceSelect)
    {
        case 1:
            userRaceFinal = user1.race1;
            user1.userHealth = 12;
            user1.userStrength = 5;
            user1.userSpeed = 4;
            break;

        case 2:
            userRaceFinal = user1.race2;
            user1.userHealth = 6;
            user1.userStrength = 4;
            user1.userSpeed = 4;
            break;

        case 3:
            userRaceFinal = user1.race3;
            user1.userHealth = 15;
            user1.userStrength = 6;
            user1.userSpeed = 2;
            break;

        case 4:
            userRaceFinal = user1.race4;
            user1.userHealth = 10;
            user1.userStrength = 3;
            user1.userSpeed = 6;
            break;

        default:
            cout << "invalid selection. Please try again." << '\n';
            break;
    }

    cout << "\nYou have selected: "                     //repeat of steps for previous races
         << userRaceFinal << '\n';
    cout << "Stats " << "\n"
         << "Health: " << user1.userHealth << '\n'
         << "Strength: " << user1.userStrength << '\n'
         << "Speed: " << user1.userSpeed << '\n'
         << '\n';

}