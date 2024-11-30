#include "papan.h"
#include "control.h"
#include "game.h"


int main() {
    initPapan();
    while (!isGameOver()) {
        printPapan();
        processInput();
    }
    return 0;
}