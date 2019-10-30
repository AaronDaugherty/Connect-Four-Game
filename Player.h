#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player {
protected:
  string name;
  bool win;
public:
  Player();
  string getName();
  void setName(string name);
  void setWin(bool win);
  bool getWin();
  void assignName();
  int move();
    
};




#endif
