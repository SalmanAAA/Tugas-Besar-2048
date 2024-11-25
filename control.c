#include "control.h"
#include "papan.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int papan[SIZE][SIZE]

void atas(){
    for (int j = 0; j < SIZE; j++){
        for (int i = 1; i < SIZE; i++){
            if (papan[i][j] != 0){
                int k = i; //var k buat nandain pergerakan di baris-1 (keatas)
                while (k > 0 && papan[k-1][j] == 0){
                    papan[k-1][j] = papan[k][j];
                    papan[k][j] = 0;
                    k--; //k-- keatas lagi
                }
                if (k > 0 && papan[k-1][j] == papan{k}[j]){
                    papan[k-1][j] *= 2;
                    papan[k][j] = 0;
                }
            }
        }
    }
}
void bawah(){
    for (int j = 0; j < SIZE; j++){
        for (int i = SIZE - 2; i >= 0; i--){
            if (papan[i][j] != 0){
                int k = i; //var k buat nandain pergerakan di baris+1 (kebawah)
                while (k < SIZE - 1 && papan[k+1][j] == 0){
                    papan[k+1][j] = papan[k][j];
                    papan[k][j] = 0;
                    k++; //k++ kebawah lagi
                }
                if (k < SIZE - 1 && papan[k+1][j] == papan[k][j]){
                    papan[k+1][j] *= 2;
                    papan[k][j] = 0;
                }
            }
        }
    }
}

void kiri(){
    for (i = 0; i < SIZE; i++){
        for (int j = 1; j < SIZE; j++){
            if (papan[i][j] != 0){
                int k = j;
                while (k > 0 && papan[i][k-1] == 0){
                    papan[i][k-1] = papan[i][k];
                    papan[i][k] = 0;
                    k--;
                }
                if (k > 0 && papan[i][k-1] == papan[i][k]){
                    papan[i][k-1] *= 2;
                    papan[i][k] = 0;
                }
            }
        }
    }
}

void kanan() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = SIZE - 2; j >= 0; j--) {
            if (papan[i][j] != 0) {
                int k = j;
                while (k < SIZE - 1 && papan[i][k+1] == 0) {
                    papan[i][k+1] = papan[i][k];
                    papan[i][k] = 0;
                    k++;
                }
                if (k < SIZE - 1 && board[i][k+1] == papan[i][k]) {
                    papan[i][k+1] *= 2;
                    papan[i][k] = 0;
                }
            }
        }
    }
}