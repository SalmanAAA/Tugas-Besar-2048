#include "game.h"
#include "papan.h"
#include "control.h"
#include "score.h"
#include <stdio.h>
#include <conio.h> // Untuk _getch()

#define WIN 2048 //define WIN untuk nilai menang
extern int papan[SIZE][SIZE];

void processInput() {
    char input = _getch(); // Mengambil input tanpa menunggu enter
    switch (input) {
        case 'w': atas(); break;
        case 's': bawah(); break;
        case 'a': kiri(); break; 
        case 'd': kanan(); break;
    }
    addTile();
}

int checkWin() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (papan[i][j] == WIN) {
                return 1;
            }
        }
    }
    return 0;
}

int checkFull() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (papan[i][j] == 0) {
                return 0;
            }
            // cek jika masih bisa gerak
            if ((i > 0 && papan[i][j] == papan[i-1][j]) || 
                (i < SIZE - 1 && papan[i][j] == papan[i+1][j]) ||
                (j > 0 && papan[i][j] == papan[i][j-1]) ||
                (j < SIZE - 1 && papan[i][j] == papan[i][j+1])) {
                return 0;
            }
        }
    }
    return 1;
}

int isGameOver() {
    if (checkWin()) {
        printPapan();  //untuk print papan terakhir
        displayScore();
        printf("Selamat! Anda mencapai 2048!\n");
        printf("Tekan tombol apapun untuk keluar...\n");
        _getch();  // Tunggu input sebelum keluar
        return 1;
    }
    if (checkFull()) {
        printPapan();  // untuk print papan terakhir
        displayScore();
        printf("Permainan selesai. Tidak ada gerakan yang tersisa.\n");
        printf("Tekan tombol apapun untuk keluar...\n");
        _getch();  // Tunggu input sebelum keluar
        return 1;
    }
    return 0;
}
