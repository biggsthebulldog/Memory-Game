#pragma once

#include <iostream>
#include <string>

struct Board{
  //constructor
    Board(int numRow, int numCol); //this will take in a numRow and numCol and make them the member vars

    void printBoard();

  private:
    int _numRow;
    int _numCol;
};
