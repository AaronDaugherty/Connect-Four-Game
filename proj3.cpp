#include <iostream>
#include "Board.h"
#include "Player.h"
#include "HumanPlayer.h"
#include "SimpleComputerPlayer.h"

using namespace std;

void declareComp(int i);

void declareHuman(int i);

int main(int argc, char* argv[]) {

  for (int i = 1; i < 3; i++) {
    string input = argv[i];
    
    if (input == "-c") {
      declareComp(i);
    }
    
    else if (input == "-h") {
      declareHuman(i); 
    }
  }
  
  //board initialization
  Board *b1 = new Board();
  b1->printBoard();
  return 0;
}

void declareComp(int i) {
  if (i == 1) {
    SimpleComputerPlayer *zoey = new SimpleComputerPlayer;
    cout << "Player One, please enter your name: " << zoey->getName() << endl;
  }
  else if (i == 2) {
    SimpleComputerPlayer *yeoz = new SimpleComputerPlayer;
    cout << "Player Two, please enter your name: " << yeoz->getName();
  }
}

void declareHuman(int i) {
  if (i == 1) {
    cout << "Player One, please enter your name: ";
    HumanPlayer *aaron = new HumanPlayer;
  }
  else if (i == 2) {
    cout << "Player Two, please enter your name: ";
    HumanPlayer *garrett = new HumanPlayer;
  }
}
