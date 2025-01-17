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
* This file's purpose is to implement the dealing of cards
* before the game starts
*
*/

#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "dealingCards.h"
using namespace std;


void dealingCardsForHuman(vector<string> *handHuman, vector<string> *deck) {
    int randomNumber = rand() % deck->size();
    handHuman->push_back((*deck)[randomNumber]);
    deck->erase(deck->begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handHuman->push_back((*deck)[randomNumber]);
    deck->erase(deck->begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handHuman->push_back((*deck)[randomNumber]);
    deck->erase(deck->begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handHuman->push_back((*deck)[randomNumber]);
    deck->erase(deck->begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handHuman->push_back((*deck)[randomNumber]);
    deck->erase(deck->begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handHuman->push_back((*deck)[randomNumber]);
    deck->erase(deck->begin() + randomNumber);
}

void dealingCardsForComputer(vector<string> *handComputer, vector<string> *deck) {
    int randomNumber = rand() % deck->size();
    handComputer->push_back((*deck)[randomNumber]);
    deck->erase(deck->begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handComputer->push_back((*deck)[randomNumber]);
    deck->erase(deck->begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handComputer->push_back((*deck)[randomNumber]);
    deck->erase(deck->begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handComputer->push_back((*deck)[randomNumber]);
    deck->erase(deck->begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handComputer->push_back((*deck)[randomNumber]);
    deck->erase(deck->begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handComputer->push_back((*deck)[randomNumber]);
    deck->erase(deck->begin() + randomNumber);
}

int getCardRank(const string card) {
    switch (card[0]) {
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case '1': return 10; // for card == 10
        case 'J': return 11;
        case 'Q': return 12;
        case 'K': return 13;
        case 'A': return 14;
    }
}

void swapCards(string *cardA, string *cardB) {
    string tmp = *cardA;
    *cardA = *cardB;
    *cardB = tmp;
}

void sortHand(vector<string> *hand) {
    for (int i = 0; i < hand->size(); i++) {
        for (int j = i + 1; j < hand->size(); j++) {
            if (getCardRank((*hand)[i]) > getCardRank((*hand)[j])) {
                swapCards(&(*hand)[i], &(*hand)[j]);
            }
        }
    }
}

void returnCardsToDeck(vector<string> *hand, vector<string> *deck) {
    while (!hand->empty()) {
        deck->push_back(hand->back());
        hand->pop_back();
    }
}

bool isValidHand(vector<string> *hand, vector<string> *deck) {
    // first sort for easier counting afterward
    sortHand(hand);

    string card = (*hand)[0];
    int count = 1;
    for (int i = 1; i < hand->size(); i++) {
        if ((*hand)[i] == card) {
            count++;
        }
        else {
            card = (*hand)[i];
            count = 1;
        }

        if (count == 4) {
            returnCardsToDeck(hand, deck);
            return false;
        }
    }

    return true;
}

void dealingCards(vector<string> *handHuman, vector<string> *handComputer, vector<string> *deck) {
    srand(time(0));
    // There is no need for suits, only the power of cards (numbers and J, Q, K, A) is important
    // J - Jack, Q - queen, K - king, A - ace
    *deck = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A",
        "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A",
        "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A",
        "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    do {
        dealingCardsForHuman(handHuman, deck);
    } while (!isValidHand(handHuman, deck));

    do {
        dealingCardsForComputer(handComputer, deck);
    } while (!isValidHand(handComputer, deck));
}