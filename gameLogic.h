#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <vector>
#include <string>

void displayHand(std::vector<std::string> *handHuman);
bool isCardInHand(const std::vector<std::string> *hand, const std::string &card);
void takeDownCards(std::vector<std::string> *hand, std::string card, std::vector<std::string> *pile);
bool exchangeCards(std::vector<std::string> *possessor, std::vector<std::string> *recipient, std::string card,
    std::vector<std::string> *pileRecepient);
bool drawCard(std::vector<std::string> *hand, std::vector<std::string> *deck, std::string card,
    std::vector<std::string> *pile, bool isHuman);
void turnHuman(std::vector<std::string> *handHuman, std::vector<std::string> *handComputer,
    std::vector<std::string> *deck, std::vector<std::string> *pileHuman);
void turnComputer(std::vector<std::string> *handHuman, std::vector<std::string> *handComputer,
    std::vector<std::string> *deck, std::vector<std::string> *pileComputer);
void gameLogic(std::vector<std::string> *handHuman, std::vector<std::string> *handComputer,
    std::vector<std::string> *deck, std::vector<std::string> *pileHuman, std::vector<std::string> *pileComputer);

#endif
