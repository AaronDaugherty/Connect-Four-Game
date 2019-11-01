#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

Player::Player() {
    name = "Zoey";
    win = false;
}

Player::~Player() {
}

string Player::getName() {
    return this->name;
}

void Player::setName(string pName) {
    this->name = pName;
}

void Player::setWin(bool pWin) {
    this->win = pWin;
}

void Player::assignName() {
  cout << name << endl;
}

int Player::move() {
  int move;
  cin >> move;
  return move;
}
