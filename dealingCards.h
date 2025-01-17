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
* This file's purpose is to declare the functions and
* interfaces for the dealing of cards before the game starts
*
*/

#ifndef DEALING_CARDS_H
#define DEALING_CARDS_H

#include <string>
#include <vector>

void dealingCardsForHuman(std::vector<std::string> *handHuman, std::vector<std::string> *deck);
void dealingCardsForComputer(std::vector<std::string> *handComputer, std::vector<std::string> *deck);
int getCardRank(const std::string card);
void swapCards(std::string *cardA, std::string *cardB);
void sortHand(std::vector<std::string> *hand);
void returnCardsToDeck(std::vector<std::string> *hand, std::vector<std::string> *deck);
bool isValidHand(std::vector<std::string> *hand, std::vector<std::string> *deck);
void dealingCards(std::vector<std::string> *handHuman, std::vector<std::string> *handComputer, std::vector<std::string> *deck);

#endif
