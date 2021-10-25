#ifndef DUELO_H
#define DUELO_H

#include <stdbool.h>
typedef struct {
    int attack;
    int defense;
    int abilityPower;
} cards;

void readInputs(int *n, cards *prassodia);
cards *allocateVector(int n);
void deallocateVector(cards **Cards);
void readCards(int n, cards *Cards);
bool comparison(int n, cards *Cards, cards prassodia);
bool operations(int n, cards *Cards, int attack, int defense, int abilityPower);
void output(bool out);
cards sumCards(cards Card1, cards Card2);
cards subCards(cards Card1, cards Card2);

#endif