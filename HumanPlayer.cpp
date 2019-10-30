#include "HumanPlayer.h"
#include <iostream>

using namespace std;

HumanPlayer::HumanPlayer() {
}

void HumanPlayer::assignName() {
    string name1;
    cin >> name1;
    this->setName(name1);
}

int HumanPlayer::move() {
  int move;
  cin >> move;
  return move;
}
