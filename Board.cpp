#include "Board.h"
#include <iostream>

using namespace std;

Board::Board() {
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 7; j++) {
            boardArray[i][j] = '_';
        }
    }
}

void Board::printBoard() {
    for(int i = 0; i < 6; i++) {
        cout << endl;
        cout << "|";
        for(int j = 0; j < 7; j++) {
            cout << this->getSpace(i,j) << "|";
        }
    }
    cout << endl;
}

char Board::getSpace(int i, int j) {
    return boardArray[i][j];
}
