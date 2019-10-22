#include <iostream>
#include "Player.h"

using namespace std;

Player::Player() {
    name = "Zoey"
    win = false;}

string Player::getName() {
    return this->name;
}

void Player::setName(string pName) {
    this->name = pName;
}

void Player::setWin(bool pWin) {
    this->win = pWin;
}
