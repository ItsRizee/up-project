#include "dealingCards.h"
#include "gameLogic.h"
using namespace std;

// commands - give

int main () {
    vector<string> handHuman;
    vector<string> handComputer;
    vector<string> deck;

    dealingCards(&handHuman, &handComputer, &deck);
    gameLogic(&handHuman, &handComputer, &deck);

    return 0;
}