#ifndef BOARD_H
#define BOARD_H

class Board {
private:
    char boardArray[][];
public:
    Board(int width, int height);
    void printBoard();
    char getSpace(int i, int j);
};



#endif

