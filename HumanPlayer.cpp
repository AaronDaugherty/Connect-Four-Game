#include "HumanPlayer.h"
#include <iostream>

using namespace std;

Player::HumanPlayer() {
  string name1;
  cin >> name1;
  name = name1;
}

string Player::getname() {
  return name;
}
