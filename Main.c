#include "papan.h"
#include "control.h"
#include "game.h"
#include "score.h"

int main() {
    initPapan();
    initScore();
    while (!isGameOver()) {
        printPapan();
        displayScore();
        processInput();
    }
    return 0;
}