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

void dealingCards(vector<string> *handHuman, vector<string> *handComputer, vector<string> *deck) {
    srand(time(0));
    // There is no need for suits, only the power of cards (numbers and J, Q, K, A) is important
    // J - Jack, Q - queen, K - king, A - ace
    *deck = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A",
        "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A",
        "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A",
        "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    dealingCardsForHuman(handHuman, deck);

    dealingCardsForComputer(handComputer, deck);
}