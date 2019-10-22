#ifndef PLAYER_H
#define PLAYER_H

class Player {
private:
    string name;
    bool win;
public:
  Player();
  string getName();
  void setName(string name);
  void setWin(bool win);
  bool getWin();
  


};




#endif
