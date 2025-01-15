#ifndef DEALING_CARDS_H
#define DEALING_CARDS_H

#include <string>
#include <vector>

void dealingCardsForHuman(std::vector<std::string> *handHuman, std::vector<std::string> *deck);
void dealingCardsForComputer(std::vector<std::string> *handComputer, std::vector<std::string> *deck);
void dealingCards(std::vector<std::string> *handHuman, std::vector<std::string> *handComputer, std::vector<std::string> *deck);

#endif
