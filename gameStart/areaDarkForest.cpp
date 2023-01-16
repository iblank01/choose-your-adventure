#include "areaDarkForest.h"
using namespace std;

void userDarkForest()
{
    struct travellers //TBD whether this will be as official method for storing NPC data
    {
        string name;
        int travellerImpression = 0;
    };

    cout << "============================================================================"
         << '\n' << '\n';

    cout << "Loading. . . " << '\n';
    cout << "You suddenly wake-up in your tent, your surroundings cold and dim. " << '\n';

    //first traveller NPC in game
    travellers travellerNick;
    travellerNick.name = "Nick";
    
    cout << '\n'
         << "Hello there! The name's Nick. Where are you headed?" << '\n';
    cout << "1.) Trying to find the next town, a creature I met said go " << '\n'
         << "2.) How do I know I can trust you? " << '\n'
         << "3.) Not sure, really; just going wherever. " <<'\n';

//    cout << "Hello " << user1.userRaceSelect;
}