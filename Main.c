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
    for(int j=1;j<=SIZE;j++){
      if (papan[i][j]==0){
        printf(".\t"); //menampilkan board 2 Dimensi.
      }else{
        printf("%d\t",papan[i][j]);
      }
    }
    printf("\n");
  }
  printf("\n");
}

//cek 
//cek 2
//cek 3