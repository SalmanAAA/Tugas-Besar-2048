#include "papan.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4 //define SIZE untuk ukuran papan
int papan[SIZE][SIZE]; //define papan 2 dimensi

void initPapan(){ //modul buat nol-in papan
  srand(time(0)); //buat random pake srand, terus time(0) buat random seed
  for (int i=0;i<SIZE;i++){
    for(int j=0;j<SIZE;j++){
      papan[i][j]=0;
    }
  }
  addTile();
  addTile();
}

void printPapan(){ //modul buat nampilin papan
  system("cls");
  for (int i=0;i<SIZE;i++){
    for(int j=0;j<SIZE;j++){
    	printf("%4d",papan[i][j]);
    }
    printf("\n");
  }
}

void addTile(){ //modul buat nambah tile 
  int empty[SIZE*SIZE][2]; //buat array kosong untuk nampung posisi kosong
  int emptyCount = 0; //buat counter untuk posisi kosong
  for (int i=0;i<SIZE;i++){ 
    for (int j=0;j<SIZE;j++){
      if (papan[i][j]==0){ //jika posisi kosong
        empty[emptyCount][0]=i; //simpen posisi i
        empty[emptyCount][1]=j; //simpen posisi j
        emptyCount++; //ingkremen counter
      }
    }
  }
  if (emptyCount>0){ //jika ada posisi kosong
    int r = rand()%emptyCount; //buat random untuk posisi kosong
    papan[empty[r][0]][empty[r][1]] = (rand()%10 == 0) ? 4 : 2; //random nilai 2, ? <- operator ternary
  }
}
