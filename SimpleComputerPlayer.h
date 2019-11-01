#ifndef SIMPLEHUMANPLAYER_H
#define SIMPLEHUMANPLAYER_H

#include "Player.h"

/*
 *This class represents a computer player in a game of connect four.
 */
class SimpleComputerPlayer : public Player {
private:
  int moveCount = 0;
public:
  SimpleComputerPlayer();
  string getName();
  void assignName();
  int move(char boardArray[6][7]);
};

#endif
