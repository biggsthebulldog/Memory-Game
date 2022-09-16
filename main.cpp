#include <iostream>
#include <iomanip>
#include <vector>

#include "board.hpp"
#include "card.hpp"

int main(void)
{
  std::cout << "Welcome to the Memory Game! \n";
  std::cout << "Here's how to play: \nWhen you get a prompt, select the row and column (in that order) to flip \n";
  std::cout << "Press Any Button To Start: \n";

  std::string tempStr;
  getline(std::cin, tempStr);

  // TODO: make a 4x4 matrix and print out a [ # ] for each place
  Board(4, 4);


  //TODO: while all are not flipped, play game.

  /*
  Game play Loop:
    "Choose First Card"
    "Choose Second Card"
    "If firstChoice._state == secondChoice._state keep both flipped"
    "else, unflip both"

    Back to top...


  */
}
