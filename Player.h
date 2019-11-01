#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player {
protected:
  string name;
  bool win = false;
public:
  Player();
  ~Player();
  string getName();
  void setName(string name1);
  bool p1WinCheck(char boardArray[6][7]);
  bool p2WinCheck(char boardArray[6][7]);
  bool getWin();
  void assignName();
  int move();    
};




#endif
