#include "dealing-cards.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;


void dealingCardsForHuman (string handHuman[6], vector<string> *deck) {
    int randomNumber = rand() % deck->size();
    handHuman[0] = (*deck)[randomNumber];
    (*deck).erase((*deck).begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handHuman[1] = (*deck)[randomNumber];
    (*deck).erase((*deck).begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handHuman[2] = (*deck)[randomNumber];
    (*deck).erase((*deck).begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handHuman[3] = (*deck)[randomNumber];
    (*deck).erase((*deck).begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handHuman[4] = (*deck)[randomNumber];
    (*deck).erase((*deck).begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handHuman[5] = (*deck)[randomNumber];
    (*deck).erase((*deck).begin() + randomNumber);
}

void dealingCardsForComputer (string handComputer[6], vector<string> *deck) {
    int randomNumber = rand() % deck->size();
    handComputer[0] = (*deck)[randomNumber];
    (*deck).erase((*deck).begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handComputer[1] = (*deck)[randomNumber];
    (*deck).erase((*deck).begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handComputer[2] = (*deck)[randomNumber];
    (*deck).erase((*deck).begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handComputer[3] = (*deck)[randomNumber];
    (*deck).erase((*deck).begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handComputer[4] = (*deck)[randomNumber];
    (*deck).erase((*deck).begin() + randomNumber);

    randomNumber = rand() % deck->size();
    handComputer[5] = (*deck)[randomNumber];
    (*deck).erase((*deck).begin() + randomNumber);
}

void dealingCards (string handHuman[6], string handComputer[6], vector<string> *deck) {
    srand (time (0));
    // h - hearts, d - diamonds, c - clubs, s - spades
    // J - Jack, Q - queen, K - king, A - ace
    *deck = {"2h", "3h", "4h", "5h", "6h", "7h", "8h", "9h", "10h", "Jh", "Qh", "Kh", "Ah",
    "2d", "3d", "4d", "5d", "6d", "7d", "8d", "9d", "10d", "Jd", "Qd", "Kd", "Ad",
    "2c", "3c", "4c", "5c", "6c", "7c", "8c", "9c", "10c", "Jc", "Qc", "Kc", "Ac",
    "2s", "3s", "4s", "5s", "6s", "7s", "8s", "9s", "10s", "Js", "Qs", "Ks", "As"};

    dealingCardsForHuman (handHuman, deck);

    dealingCardsForComputer (handComputer, deck);
}