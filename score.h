#ifndef SCORE_H
#define SCORE_H

void initScore();
void updateScore(int points);
void saveHighScore();
void loadHighScore();
void displayScore();
int getCurrentScore();
int getHighScore();

#endif