#include "josephus.h"

#include <stdio.h>

// MANTER COMO ESPECIFICADO, NAO ADICIONE OUTRAS FUNCOES OU PROCEDIMENTOS
int josephus(int n, int k) {
    // Caso base
    if (n == 1) {
        return 1;
    } else {
        /*enquanto o "n" não atinge o caso base, ou seja "n = 1", ele vai executando a função
        novamente, decrescendo o "n" em 1 a cada chamada e mantendo o "k" como constante
        formando uma pilha até chegar no "caso base". Chegando no caso base, ele retorna 1
        resolvendo a equação matemática e retornando outro resultando e assim por diante até voltar
        para a primeira chamada da função, onde retorna o resultado final para a main.*/
        return ((josephus(n - 1, k) + k - 1) % n) + 1;
    }
}
