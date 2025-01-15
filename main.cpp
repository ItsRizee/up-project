#include "dealingCards.h"
#include "gameLogic.h"
using namespace std;

// commands - give

int main () {
    vector<string> handHuman;
    vector<string> handComputer;
    vector<string> deck;
    vector<string> pileHuman;
    vector<string> pileComputer;

    dealingCards(&handHuman, &handComputer, &deck);
    gameLogic(&handHuman, &handComputer, &deck, &pileHuman, &pileComputer);

    return 0;
}