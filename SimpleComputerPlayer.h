#ifndef SIMPLEHUMANPLAYER_H
#define SIMPLEHUMANPLAYER_H

#include "Player.h"

class SimpleComputerPlayer : public Player {
private:
  int moveCount = 0;
public:
  SimpleComputerPlayer();
  void assignName();
  int move(char boardArray[6][7]);
};

#endif
