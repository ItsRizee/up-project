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

#include <iostream>
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

    cout << endl << endl << "Welcome to \"Mind Your Own Business\"" << endl << endl;
    cout << "Commands: " << endl;
    cout << "When computer ask for a card: give" << endl;
    cout << "When you need to take down 4 of a kind: down" << endl << endl;
    cout << "Let the game begin!" << endl;

    dealingCards(&handHuman, &handComputer, &deck);
    gameLogic(&handHuman, &handComputer, &deck, &pileHuman, &pileComputer);
    secondPhase(&pileHuman, &pileComputer);

    return 0;
}