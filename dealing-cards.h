#ifndef DEALING_CARDS_H
#define DEALING_CARDS_H

#include <string>
#include <vector>

void dealingCardsForHuman (std::string **handHuman, std::vector<std::string> *deck);
void dealingCardsForComputer (std::string **handComputer, std::vector<std::string> *deck);
void dealingCards (std::string handHuman[6], std::string handComputer[6], std::vector<std::string> *deck);

#endif
