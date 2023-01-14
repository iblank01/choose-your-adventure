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

//    cout << "Hello " << userRaceFinal
}