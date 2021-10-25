#include "duelo.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void readInputs(int *n, cards *prassodia) {
    // leitura das entradas
    scanf("%d %d %d %d", n, &prassodia->attack, &prassodia->defense, &prassodia->abilityPower);
}

cards *allocateVector(int n) {
    cards *Cards;

    Cards = malloc(n * sizeof(cards));

    return Cards;
}

void readCards(int n, cards *Cards) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &Cards[i].attack);
        scanf("%d", &Cards[i].defense);
        scanf("%d", &Cards[i].abilityPower);
    }

    /*for (int i = 0; i < n; i++) {
        printf("%d ", Cards[i].attack);
        printf("%d ", Cards[i].defense);
        printf("%d", Cards[i].abilityPower);
        printf("\n");
    }*/
}

void deallocateVector(cards **Cards) {
    free(*Cards);
}

bool operations(int n, cards *Cards, int attack, int defense, int abilityPower) {
    // caso base 1, caso exista uma combinacao equivalente ao prassodia
    if (attack == 0 && defense == 0 && abilityPower == 0) {
        return true;
    }
    // caso base 2, caso nao exista nenhuma combinacao de cartas equivalente ao prassodia
    if (n == 0 && (attack != 0 || defense != 0 || abilityPower != 0)) {
        return false;
    }
    // condicao se a carta analisada for maior que o prassodia
    if (Cards[n - 1].attack > attack || Cards[n - 1].defense > defense || Cards[n - 1].abilityPower > abilityPower) {
        return operations(n - 1, Cards, attack, defense, abilityPower);
    }
    // condicao se a carta analisada for menor que o prassodia e a efetuacao das "somas" das cartas
    return operations(n - 1, Cards, attack, defense, abilityPower) || operations(n - 1, Cards, attack - Cards[n - 1].attack, defense - Cards[n - 1].defense, abilityPower - Cards[n - 1].abilityPower);

    /*printf("\n%d %d %d\n", prassodia.attack, prassodia.defense, prassodia.abilityPower);
    if (0 == prassodia.attack && 0 == prassodia.defense && 0 == prassodia.abilityPower) {
        printf("\ntrue\n");
        return true;
    }
    if (n == 0 && (0 != prassodia.attack && 0 != prassodia.defense && 0 != prassodia.abilityPower)) {
        printf("\nfalse\n");
        return false;
    }
    if (Cards[n].attack >= prassodia.attack || Cards[n].defense >= prassodia.defense || Cards[n].abilityPower >= prassodia.abilityPower) {
        printf("\nola\n");
        return operations((n - 1), Cards, prassodia);
    }

    return operations((n - 1), Cards, prassodia) || operations((n - 1), Cards, (subCards(prassodia, Cards[n])));
*/
}

// a + b + c = d

/*cards sumCards(cards Card1, cards Card2) {
    cards aux;
    aux.attack = Card1.attack + Card2.attack;
    aux.defense = Card1.defense + Card2.defense;
    aux.abilityPower = Card1.abilityPower + Card2.abilityPower;

    return aux;
}
cards subCards(cards Card1, cards Card2) {
    cards aux;
    aux.attack = Card1.attack - Card2.attack;
    aux.defense = Card1.defense - Card2.defense;
    aux.abilityPower = Card1.abilityPower - Card2.abilityPower;

    return aux;
}*/

void output(bool out) {
    if (out)
        printf("Y\n");
    else
        printf("N\n");
}

/*
3 3 3 3
1
1
1
1
1
1
1
1
1
*/

bool comparison(int n, cards *Cards, cards prassodia) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (Cards[i].attack == prassodia.attack && Cards[i].defense == prassodia.defense && Cards[i].abilityPower == prassodia.abilityPower) {
            cont++;
        }
    }
    if (cont == 0)
        return true;
    else
        return false;
}