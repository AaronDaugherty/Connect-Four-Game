#include "SimpleComputerPlayer.h"
#include <iostream>

using namespace std;

SimpleComputerPlayer::SimpleComputerPlayer() {
  this->setName("Zoey"); 
}

string SimpleComputerPlayer::getName() {
    return this->name;
}
