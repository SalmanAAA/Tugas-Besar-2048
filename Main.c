#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4 //Define SIZE Array 4x4

void printPapan(int papan[SIZE][SIZE]); //Modul pertama untuk program menampilkan board

int main (){

  int papan[SIZE][SIZE] = {0};
  printPapan(papan);

  return 0;
}

void printPapan(int papan[SIZE][SIZE]){
  for (int i=0;i<SIZE;i++){
    for(int j=0;j<=SIZE;j++){
    	printf("%4d",(papan[i][j]==0));
    }
    printf("\n");
  }
}

