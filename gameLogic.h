#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <vector>
#include <string>

void displayHand(std::vector<std::string> *handHuman);
bool isCardInHand(const std::vector<std::string> *hand, const std::string &card);
bool exchangeCards(std::vector<std::string> *possessor, std::vector<std::string> *recipient, std::string card);
void turnHuman(std::vector<std::string> *handHuman, std::vector<std::string> *handComputer, std::vector<std::string> *deck);
void turnComputer(std::vector<std::string> *handHuman, std::vector<std::string> *handComputer, std::vector<std::string> *deck);
void gameLogic(std::vector<std::string> *handHuman, std::vector<std::string> *handComputer, std::vector<std::string> *deck);

#endif
