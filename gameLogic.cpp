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
* This file's purpose is to implement the main game logic
* for the first stage of the game
*
*/


#include <iostream>
#include <vector>
#include <string>
#include "gameLogic.h"
using namespace std;

// displays human's hand on the console
void displayHand(vector<string> *handHuman) {
    cout << endl;
    for (int i = 0; i < handHuman->size(); i++) {
        cout << (*handHuman)[i] << ' ';
    }
    cout << endl << endl;;
}

bool isCardInHand(const vector<string> *hand, const string &card) {
    for (int index = 0; index < hand->size(); index++) {
        if ((*hand)[index] == card) {
            return true;
        }
    }

    cout << "There is no such card in your hand!" << endl;

    return false;
}

// checks if there are 4 of a kind in player's hand
// and if so moves them to the player's pile
void takeDownCards(vector<string> *hand, string card, vector<string> *pile, bool isHuman) {
    int countOfCard = 0;
    for (int index = 0; index < hand->size(); index++) {
        if ((*hand)[index] == card) {
            hand->erase(hand->begin() + index);
            index--;
            countOfCard++;
        }
    }

    if (countOfCard == 4) {
        if (isHuman) {
            string command;
            do {
                cout << "You have four of a kind " + card + ": ";
                cin >> command;
            } while (command != "down");
        } else {
            cout << "The card " + card + " has been taken down!" << endl;
        }
        pile->push_back(card);
    }
    else {
        while (countOfCard > 0) {
            hand->push_back(card);
            countOfCard--;
        }
    }
}

// draws card from deck and if it matches the one passed in the parameters returns true
bool drawCard(vector<string> *hand, vector<string> *deck, string card, vector<string> *pile, bool isHuman) {
    if (deck->size() > 0) {
        string drawnCard;

        const int cardIndex = rand() % deck->size();
        drawnCard = (*deck)[cardIndex];
        hand->push_back(drawnCard);
        deck->erase(deck->begin() + cardIndex);

        if (isHuman) {
            cout << "You drew the card " + drawnCard << endl;
        }

        takeDownCards(hand, drawnCard, pile, isHuman);

        if (drawnCard == card) {
            if (isHuman) {
                cout << "You drew the card requested!" << endl;
            }
            else {
                cout << "The computer drew the card it requested!" << endl;
            }
            return true;
        }
    }
    return false;
}

// give the card to the recipient (return true). If the card is not in the possessor return false
bool exchangeCards(vector<string> *possessor, vector<string> *recipient, string card,
    vector<string> *pilePossessor, vector<string> *pileRecepient, bool isHuman, vector<string> *deck) {

    bool isCardInHand = false;
    for (int index = 0; index < possessor->size(); index++) {
        if ((*possessor)[index] == card) {
            recipient->push_back(card);
            possessor->erase(possessor->begin() + index);
            index--;
            isCardInHand = true;
        }
    }

    if (possessor->empty()) {
        drawCard(possessor, deck, "", pilePossessor, !isHuman);
    }

    if (isCardInHand) {
        takeDownCards(recipient, card, pileRecepient, isHuman);
        return true;
    }
    return false;
}

void turnHuman(vector<string> *handHuman, vector<string> *handComputer, vector<string> *deck,
    vector<string> *pileHuman, vector<string> *pileComputer) {
    string card;

    do {
        do {
            do {
                if (handHuman->empty() && deck->empty()) {
                    return;
                }

                if (handHuman->empty() && !deck->empty()) {
                    drawCard(handHuman, deck, "", pileHuman, true);
                }

                displayHand(handHuman);

                cout << "Ask for a card: ";
                cin >> card;
            } while (!isCardInHand(handHuman, card));

        } while (exchangeCards(handComputer, handHuman, card, pileComputer, pileHuman, true, deck));

    } while (drawCard(handHuman, deck, card, pileHuman, true));

    displayHand(handHuman);
}

void turnComputer(vector<string> *handHuman, vector<string> *handComputer, vector<string> *deck,
    vector<string> *pileHuman, vector<string> *pileComputer) {
    string card, command;

    do {
        do {
            if (handComputer->empty() && deck->empty()) {
                return;
            }

            if (handComputer->empty() && !deck->empty()) {
                drawCard(handComputer, deck, "", pileComputer, false);
            }

            if (handComputer->size() == 1) {
                card = (*handComputer)[0];
            }
            else {
                card = (*handComputer)[rand() % handComputer->size()];
            }

            do {
                cout << "The computer asks for " + card + ": ";
                cin >> command;
            } while (command != "give");

        } while (exchangeCards(handHuman, handComputer, card, pileHuman, pileComputer, false, deck));

    } while (drawCard(handComputer, deck, card, pileComputer, false));
}

void gameLogic(vector<string> *handHuman, vector<string> *handComputer, vector<string> *deck,
    vector<string> *pileHuman, vector<string> *pileComputer) {

    // first player is always the human
    while (!handHuman->empty() || !handComputer->empty()) {
        turnHuman(handHuman, handComputer, deck, pileHuman, pileComputer);
        turnComputer(handHuman, handComputer, deck, pileHuman, pileComputer);
    }
}