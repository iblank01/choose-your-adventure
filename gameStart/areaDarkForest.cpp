#include "areaDarkForest.h"
using namespace std;

void calcImpression (int& travellerImpression, int impressionChange);

void userDarkForest()
{
    struct travellers //TBD whether this will be as official method for storing NPC data
    {
        string name;
        int travImpression = 0;
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
         << "Selection: ";

    int tempChoiceStore{ };
    cin >> tempChoiceStore;

    int choiceImpact;                                    //store impact of user choice

    switch (tempChoiceStore)
    {
        case 1:
            cout << '\n' << "Is that so? That happens to be my friend Barbaros " << '\n'
            << "*chuckles* Glad to see he's doing well. " << '\n'
            << "You might run into us a lot; we like to travel. " << '\n';

            //impression adjustments below
            cout << '\n' << "Nick will remember this" << '\n' << '\n';
            choiceImpact = 1;
            calcImpression(travellerNick.travImpression, choiceImpact);  //+1 opinion for manners
            break;

        case 2:
            cout << "Quite the closed-off one are we? " << '\n'
            << "No bother, I'll be off. "
            << "*he vanishes*" << '\n';

            //impression adjustments below
            cout << '\n' << "Nick will remember this" << '\n' << '\n';
            choiceImpact = 1;
            calcImpression(travellerNick.travImpression, choiceImpact);
            break;

        case 3:
            //cue nick dialogue, neutral response
            cout << "Alright then. Follow the trail through and you'll find me if you need me. " << '\n';

            //impression adjustments below
            choiceImpact = 0;
            break;

        default:
            cout << "Bad input. " << '\n';
            break;
    }
}

void calcImpression (int& travellerImpression, int impressionChange)
{
    switch (impressionChange)
    {
        case -1:
            travellerImpression -= 1;
            break;
        case 1:
            travellerImpression += 1;
            break;
        default:                        //default will represent neutral choices
            break;
    }
}