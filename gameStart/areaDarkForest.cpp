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
         << "3.) Not sure, really; just going wherever. " <<'\n'
         << "Selection: " << '\n';

    int tempChoiceStore{ };
    cin >> tempChoiceStore;

    switch (tempChoiceStore)
    {
        case 1:
            //cue nick dialogue, including reference to being a frequent & meaningful character
            //+1 opinion for honesty and willingness to talk
            break;
        case 2:
            //cue nick dialogue, taking clear offense
            //-1 opinion for response
            break;
        case 3:
            //cue nick dialogue, neutral response
            //+0 opinion, no meaningful dialogue comes from this
            break;
        default:
            cout << "Bad input. " << '\n';
            break;
    }

//    cout << "Hello " << user1.userRaceSelect;
}