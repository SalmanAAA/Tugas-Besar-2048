#include "score.h"
#include <stdio.h>

static int currentScore = 0;
static int highScore = 0;

void initScore() {
    currentScore = 0;
    loadHighScore();
}

void updateScore(int points) {
    currentScore += points;
    if (currentScore > highScore) {
        highScore = currentScore;
        saveHighScore();
    }
}

void saveHighScore() {
    FILE *file = fopen("highscore.txt", "w");
    if (file != NULL) {
        fprintf(file, "%d", highScore);
        fclose(file);
    }
}

void loadHighScore() {
    FILE *file = fopen("highscore.txt", "r");
    if (file != NULL) {
        fscanf(file, "%d", &highScore);
        fclose(file);
    }
}

void displayScore() {
    printf("\nScore: %d\n", currentScore);
    printf("High Score: %d\n", highScore);
}

int getCurrentScore() {
    return currentScore;
}

int getHighScore() {
    return highScore;
}