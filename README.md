# Mind Your Own Business Card Game
## Introduction

**"Mind Your Own Business"** is a simple card game where the player competes against the computer to gather sets of four identical cards. The game is played in two phases:

**First Phase:** The player and the computer ask each other for specific cards.<br>
**Second Phase:** The player and the computer try to exchange sets with each other to complete their collection of 13 four-of-a-kinds.

This project was developed as a course project for the **"Introduction to Programming" course at the Faculty of Mathematics and Informatics, Sofia University**.
## Game Rules
### Phase 1: Asking for Cards

**Human's Turn:** The player can ask the computer for any card in their hand. If the computer has the card, the player receives it; otherwise, the human draws a card from the deck and continues their turn.<br>
**Computer's Turn:** The computer randomly asks the player for a card. If the player has it, the computer receives the card; otherwise, the computer draws a card from the deck and continues its turn.
If any player draws the card they asked for its their turn again to ask.

### Phase 2: Exchanging Cards

In this phase, both the player and the computer try to complete their sets of 13 four-of-a-kinds by exchanging cards.<br>
The player and the computer take turns asking for sets.<br>
The game ends when either the player or the computer completes their set of 13 four-of-a-kinds, making them the winner.

## How to Play

When prompted, enter the card you want to ask for.<br>
If you want to take down a set of 4 of a kind, type `down`.<br>
When the computer asks for a card, type `give`.
