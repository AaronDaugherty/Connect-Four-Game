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

void Player::setName(string name1) {
  name = name1;
}

string Player::getName() {
    return this->name;
}

bool Player::p1WinCheck(char arrayBoard[6][7]) {
  int counter = 0;
  for(int i = 0; i < 6; i++) {
    for(int j = 0; j < 7; j++) {
      if(arrayBoard[i][j] == 'X') {
	for(int k = 0; k < 4; k++) {
	  if(counter > 3) {
	    return true;
	  }
	  if(arrayBoard[
	  
  return false;
}

bool Player::p2WinCheck(char arrayBoard[6][7]) {
  return false;
}

void Player::assignName() {
  cout << name << endl;
}

int Player::move() {
  int move;
  cin >> move;
  return move;
}
