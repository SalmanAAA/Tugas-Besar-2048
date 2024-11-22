#include "papan.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4 //Define SIZE untuk ukuran papan
#define WIN 2048//Define WIN untuk nilai menang

void printPapan(int papan[SIZE][SIZE]){
  for (int i=0;i<SIZE;i++){
    for(int j=0;j<=SIZE;j++){
    	printf("%4d",(papan[i][j]));
    }
    printf("\n");
  }
}
