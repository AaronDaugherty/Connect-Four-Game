#ifndef BOARD_H
#define BOARD_H

class Board {
private:
    char boardArray[6][7];
public:
    Board();
    void printBoard();
    char getSpace(int i, int j);
    
};



#endif

