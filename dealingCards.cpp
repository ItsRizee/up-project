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