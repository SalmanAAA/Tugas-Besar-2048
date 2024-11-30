#include "game.h"
#include "board.h"
#include <stdio.h>
#include <conio.h> // Untuk _getch()

#define WIN 2048 //define WIN untuk nilai menang

void processInput() {
    char input = _getch(); // Mengambil input tanpa menunggu enter
    switch (input) {
        case 'w': moveUp(); break;
        case 's': moveDown(); break;
        case 'a': moveLeft(); break; 
        case 'd': moveRight(); break;
    }
    addTile();
}

int checkWin() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == WIN_TILE) {
                return 1;
            }
        }
    }
    return 0;
}

int checkFull() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                return 0;
            }
            // Check if there's a possible move left
            if ((i > 0 && board[i][j] == board[i-1][j]) || 
                (i < SIZE - 1 && board[i][j] == board[i+1][j]) ||
                (j > 0 && board[i][j] == board[i][j-1]) ||
                (j < SIZE - 1 && board[i][j] == board[i][j+1])) {
                return 0;
            }
        }
    }
    return 1;
}

int isGameOver() {
    if (checkWin()) {
        printf("Selamat! Anda mencapai 2048!\n");
        return 1;
    }
    if (checkFull()) {
        printf("Permainan selesai. Tidak ada gerakan yang tersisa.\n");
        return 1;
    }
    return 0;
}
