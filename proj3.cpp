#include <iostream>
#include "Board.h"
#include "Player.h"
#include "HumanPlayer.h"
#include "SimpleComputerPlayer.h"

using namespace std;

void hvh();

void cvc();

void hvc();

void cvh();

int main(int argc, char* argv[]) {

  string a1 = argv[1];
  string a2 = argv[2];

  cout << "Let's Start a Game of Connect 4" << endl << endl;
  
  if (a1 == "-h" && a2 == "-h") { hvh(); }
  if (a1 == "-c" && a2 == "-c") { cvc(); }
  if (a1 == "-h" && a2 == "-c") { hvc(); }
  if (a1 == "-c" && a2 == "-h") { cvh(); }

  return 0;
}

void hvh() {
  int count = 0;
  
  cout << "Player One, please enter your name: ";
  HumanPlayer *p1 = new HumanPlayer;
  cout << "Player Two, please enter your name: ";
  HumanPlayer *p2 = new HumanPlayer;
  
  Board *b1 = new Board;
  b1->printBoard();

  while (count < 42) {
    cout << p1->getName() << "'s turn, Please enter an integer between 1 and 7: ";
    b1->p1Game(p1->move());
    b1->printBoard();

    count++;

    cout << p2->getName() << "'s turn, Please enter an integer between 1 and 7: ";
    b1->p2Game(p2->move());
    b1->printBoard();

    count++; 
  }
  if (count == 42) {
    cout << endl << "The board is full, it is a draw!" << endl;
  }
  delete (b1);
  delete (p1);
  delete (p2);
}

void cvc() {
  int count = 0;
  
  SimpleComputerPlayer *p1 = new SimpleComputerPlayer;
  SimpleComputerPlayer *p2 = new SimpleComputerPlayer;
  cout << "Player One, please enter your name: ";
  p1->assignName();
  cout << "Player Two, please enter your name: ";
  p2->assignName();

  Board *b1 = new Board();
  b1->printBoard();

  while (count < 42) {
    cout << p1->getName() << "'s turn, Please enter an integer between 1 and 7: ";
    b1->p1Game(p1->move(b1->boardArray));
    b1->printBoard();

    count++;
    
    cout << p2->getName() << "'s turn, Please enter an integer between 1 and 7: ";
    b1->p2Game(p2->move(b1->boardArray));
    b1->printBoard();

    count++;
  }
  
  if (count == 42) {
    cout << endl << "The board is full, it is a draw!" << endl;
  }  
  delete (b1);
  delete (p1);
  delete (p2);
}

void hvc() {
  int count = 0;
  
  SimpleComputerPlayer *p2 = new SimpleComputerPlayer;
  cout << "Player One, please enter your name: ";
  HumanPlayer *p1 = new HumanPlayer;
  cout << "Player Two, please enter your name: ";
  p2->assignName();

  Board *b1 = new Board();
  b1->printBoard();

  while (count < 42) {
    cout << p1->getName() << "'s turn, Please enter an integer between 1 and 7: ";
    b1->p1Game(p1->move());
    b1->printBoard();

    count++;
    
    cout << p2->getName() << "'s turn, Please enter an integer between 1 and 7: ";
    b1->p2Game(p2->move(b1->boardArray));
    b1->printBoard();

    count++;
  }
  if (count == 42) {
    cout << endl << "The board is full, it is a draw!" << endl;
  }
  delete (b1);
  delete (p1);
  delete (p2);
}

void cvh() {
  int count = 0;
  
  SimpleComputerPlayer *p1 = new SimpleComputerPlayer;
  cout << "Player One, please enter your name: ";
  p1->assignName();
  cout << "Player Two, please enter your name: ";
  HumanPlayer *p2 = new HumanPlayer;

  Board *b1 = new Board();
  b1->printBoard();

  while (count < 42) {
    cout << p1->getName() << "'s turn, Please enter an integer between 1 and 7: ";
    b1->p2Game(p1->move(b1->boardArray));
    b1->printBoard();

    count++;
    
    cout << p2->getName() << "'s turn, Please enter an integer between 1 and 7: ";
    b1->p1Game(p2->move());
    b1->printBoard();

    count++;
  }
  if (count == 42) {
    cout << endl << "The board is full, it is a draw!" << endl;
  }
  delete (b1);
  delete (p1);
  delete (p2);
}

