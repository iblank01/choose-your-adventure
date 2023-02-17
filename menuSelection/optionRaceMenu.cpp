#include "optionRaceMenu.h"
using namespace std;

struct UserDetails
{
    string race1 = "Human";
    string race2 = "Elf";
    string race3 = "Dwarf";
    string race4 = "Hedgehog";
    int user_health { };
    int user_strength { };
    int user_speed{ };
    int user_crafting{ };

    int user_race_select { };     //keep track of user's race choice
};

void RaceMenuSelect()
{
    UserDetails user1;                                          //creating instance of UserDetails struct

    cout
    << "Pick your race to begin your adventure!" << '\n'
    << "1.) Human" << '\n'
    << "2.) Elf" << '\n'
    << "3.) Dwarf" << '\n'
    << "4.) Hedgehog" << '\n'
    << "Selection: ";
    cin >> user1.user_race_select;

    string userRaceFinal;                                       //for the purpose of storing the race more easily
    switch(user1.user_race_select)
    {
        case 1:                           //human
            userRaceFinal = user1.race1;
            user1.user_health = 3;
            user1.user_strength = 4;
            user1.user_speed = 2;
            user1.user_crafting = 2;
            break;

        case 2:                           //elf
            userRaceFinal = user1.race2;
            user1.user_health = 2;
            user1.user_strength = 2;
            user1.user_speed = 3;
            user1.user_crafting = 3;
            break;

        case 3:                           //dwarf
            userRaceFinal = user1.race3;
            user1.user_health = 4;
            user1.user_strength = 1;
            user1.user_speed = 1;
            user1.user_crafting = 4;
            break;

        case 4:                           //hedgehog
            userRaceFinal = user1.race4;
            user1.user_health = 1;
            user1.user_strength = 3;
            user1.user_speed = 4;
            user1.user_crafting = 1;
            break;

        default:
            cout << "invalid selection. Please try again." << '\n';
            break;
    }

    cout << "\nYou have selected: "                     //repeat of steps for previous races
         << userRaceFinal << '\n';
    cout << "Stats " << "\n"
         << "Health: " << user1.user_health << '\n'
         << "Strength: " << user1.user_strength << '\n'
         << "Speed: " << user1.user_speed << '\n'
         << '\n';

}