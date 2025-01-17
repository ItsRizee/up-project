/**
*
* Solution to course project # 08
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Nikola Petrov
* @idnumber 3MI0600533
* @compiler GCC
*
* This file's purpose is to define the most used arrays (vectors) and
* to call the different game phases.
*
*/

#include "dealingCards.h"
#include "gameLogic.h"
#include "secondGamePhase.h"
using namespace std;

int main () {
    vector<string> handHuman;
    vector<string> handComputer;
    vector<string> deck;
    vector<string> pileHuman;
    vector<string> pileComputer;

    dealingCards(&handHuman, &handComputer, &deck);
    gameLogic(&handHuman, &handComputer, &deck, &pileHuman, &pileComputer);
    secondPhase(&pileHuman, &pileComputer);

    return 0;
}