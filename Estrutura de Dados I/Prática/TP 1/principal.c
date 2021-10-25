#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "duelo.h"

int main() {
    int n;
    bool r;
    cards *Cards;
    cards prassodia;

    // ler as entradas
    readInputs(&n, &prassodia);

    // alocar o vetor de "n" posições
    Cards = allocateVector(n);

    // ler as cartas na mesa
    readCards(n, Cards);

    // operações
    // comparação para ver se alguma carta única corresponde ao prassódia e retornar "N"
    r = comparison((n - 1), Cards, prassodia);
    if (!r) {
        output(r);
        deallocateVector(&Cards);
        return 0;
    } else
        // operações para verificar se a soma de duas ou mais cartas equivale ao valor do "prassodia"
        r = operations(n, Cards, prassodia.attack, prassodia.defense, prassodia.abilityPower);

    // desalocar vetor de "n" posições
    deallocateVector(&Cards);

    // imprimir na saida
    output(r);

    return 0;
}