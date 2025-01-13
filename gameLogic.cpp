#include <iostream>
#include <vector>
#include <string>
using namespace std;

// displays human's hand on the console
void displayHand(vector<string> *handHuman) {

}

bool isCardInHand(const vector<string> *hand, const string &card) {
    for (int i = 0; i < hand->size(); i++) {
        if ((*hand)[i] == card) {
            return true;
        }
    }

    cout << "There is no such card in your hand!" << endl;

    return false;
}

// give the card to the recipient (return true). If the card is not in the possessor return false
bool exchangeCards(vector<string> *possessor, vector<string> *recipient, string card) {

}

void turnHuman(vector<string> *handHuman, vector<string> *handComputer, vector<string> *deck) {
    displayHand(handHuman);
    string card, drawnCard;
    do {
        do {
            do {
                cout << "Ask the computer for a card: ";
                cin >> card;
            } while (!isCardInHand(handHuman, card));
        } while (exchangeCards(handComputer, handHuman, card));

        const int cardIndex = rand() % deck->size();
        drawnCard = (*deck)[cardIndex];
        handHuman->push_back(drawnCard);
        deck->erase(deck->begin() + cardIndex);

    } while (drawnCard == card);
}

void turnComputer(vector<string> *handHuman, vector<string> *handComputer, vector<string> *deck) {
    string card, drawnCard, command;

    do {
        do {
            card = (*handComputer)[rand() % 6];
            do {
                cout << "The computer asks for " + card + ": ";
                cin >> command;
            } while (command != "give");
        } while (exchangeCards(handHuman, handComputer, card));

        const int cardIndex = rand() % deck->size();
        drawnCard = (*deck)[cardIndex];
        handComputer->push_back(drawnCard);
        deck->erase(deck->begin() + cardIndex);

    } while (drawnCard == card);
}

void gameLogic(vector<string> *handHuman, vector<string> *handComputer, vector<string> *deck) {
    // first player is always the human
    while (!handHuman->empty() || !handComputer->empty()) {
        turnHuman(handHuman, handComputer, deck);
        turnComputer(handHuman, handComputer, deck);
    }
}