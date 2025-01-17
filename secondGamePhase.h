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
* interfaces for the second stage of the game
*
*/

#ifndef SECONDGAMEPHASE_H
#define SECONDGAMEPHASE_H

#include <vector>
#include <string>

bool secondPhaseExchangeCards(std::vector<std::string> *possessor, std::vector<std::string> *recipient,
    std::string card, bool isHuman);
void secondPhaseTurnHuman(std::vector<std::string> *pileHuman, std::vector<std::string> *pileComputer);
void secondPhaseTurnComputer(std::vector<std::string> *pileHuman, std::vector<std::string> *pileComputer);
void secondPhase(std::vector<std::string> *pileHuman, std::vector<std::string> *pileComputer);

#endif