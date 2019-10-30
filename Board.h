#ifndef BOARD_H
#define BOARD_H

class Board {
public:
  char boardArray[6][7];
  Board();
  void printBoard();
  char getSpace(int i, int j);
  char p1Game(int move);
  char p2Game(int move);
};

#endif

