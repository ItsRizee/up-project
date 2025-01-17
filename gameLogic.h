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
* interfaces for the first stage of the game
*
*/

#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <vector>
#include <string>

void displayHand(std::vector<std::string> *handHuman);
bool isCardInHand(const std::vector<std::string> *hand, const std::string &card);
void takeDownCards(std::vector<std::string> *hand, std::string card, std::vector<std::string> *pile, bool isHuman);
bool exchangeCards(std::vector<std::string> *possessor, std::vector<std::string> *recipient, std::string card,
    std::vector<std::string> *pilePossessor, std::vector<std::string> *pileRecepient, bool isHuman,
    std::vector<std::string> *deck);
bool drawCard(std::vector<std::string> *hand, std::vector<std::string> *deck, std::string card,
    std::vector<std::string> *pile, bool isHuman);
void turnHuman(std::vector<std::string> *handHuman, std::vector<std::string> *handComputer,
    std::vector<std::string> *deck, std::vector<std::string> *pileHuman, std::vector<std::string> *pileComputer);
void turnComputer(std::vector<std::string> *handHuman, std::vector<std::string> *handComputer,
    std::vector<std::string> *deck, std::vector<std::string> *pileHuman, std::vector<std::string> *pileComputer);
void gameLogic(std::vector<std::string> *handHuman, std::vector<std::string> *handComputer,
    std::vector<std::string> *deck, std::vector<std::string> *pileHuman, std::vector<std::string> *pileComputer);

#endif
