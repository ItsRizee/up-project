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
* This file's purpose is to implement the second stage of the game.
*
*/

#include <iostream>
#include <vector>
#include <string>
#include "secondGamePhase.h"
using namespace std;

bool secondPhaseExchangeCards(vector<string> *possessor, vector<string> *recipient, string card, bool isHuman) {
    for (int index = 0; index < possessor->size(); index++) {
        if ((*possessor)[index] == card) {
            recipient->push_back(card);
            possessor->erase(possessor->begin() + index);

            if (isHuman) {
                cout << "The card " + card + " was found in the computer pile!" << endl;
            }
            else {
                cout << "The computer found the card " + card + " in your pile!" << endl;
            }
            return true;
        }
    }

    return false;
}

void secondPhaseTurnHuman(vector<string> *pileHuman, vector<string> *pileComputer) {
    string card;

    do {
        if (pileHuman->size() == 13) {
            return;
        }

        cout << "Ask for a card: ";
        cin >> card;
    } while (secondPhaseExchangeCards(pileComputer, pileHuman, card, true));
}

void secondPhaseTurnComputer(vector<string> *pileHuman, vector<string> *pileComputer) {
    const vector<string> allPossibleCards = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    string card, command;

    do {
        if (pileComputer->size() == 13 || pileHuman->size() == 13) {
            return;
        }

        card = allPossibleCards[rand() % 13];

        do {
            cout << "The computer asks for " + card + ": ";
            cin >> command;
        } while (command != "give");

    } while (secondPhaseExchangeCards(pileHuman, pileComputer, card, false));
}

void secondPhase(vector<string> *pileHuman, vector<string> *pileComputer) {
    // in each pile because they are 4 of a kind I have put only one card to represent the stack
    // this means that all 52 cards divided by 4 will be 13

    cout << endl << "Second game phase starts now!" << endl;


    while (pileHuman->size() < 13 && pileComputer->size() < 13) {
        secondPhaseTurnHuman(pileHuman, pileComputer);
        secondPhaseTurnComputer(pileHuman, pileComputer);
    }

    if (pileHuman->size() == 13) {
        cout << endl << "Winner is Human!" << endl;
    }
    else {
        cout << endl << "Winner is Computer!" << endl;
    }
}