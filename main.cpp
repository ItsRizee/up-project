#include "dealing-cards.h"
using namespace std;

int main () {
    string handHuman[6];
    string handComputer[6];
    vector<string> deck;
    dealingCards(handHuman, handComputer, &deck);
    return 0;
}