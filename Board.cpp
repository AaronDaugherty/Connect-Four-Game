#include "Board.h"
#include <iostream>

using namespace std;

Board::Board() {
    for(int i = 0; i < 6; i++;) {
        for(int j = 0; j < 7; j++) {
            boardArray[i][j] = '_';
        }
    }
}

void Num::printBoard(Board b) {
    for(int i = 0; i < 6; i++;) {
        cout << endl;
        cout << "|";
        for(int j = 0; i < 7; j++) {
            cout << b.getBoard(i,j) << "|";
        }
    }
}

char Num::getSpace(int i, int j) {
    return boardArray[i][j];
}
