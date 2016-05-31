#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int sorteie(int a, int b) {
    return random() % (b-a+1) + a;
}

int dado_viciado(float prob_6) {
    int max = 1000000;
    int resultado = sorteie(1, max);
    if (resultado <= max * prob_6) {
        return 6;
    }
    int tamanho = (max - max * prob_6) / 5;
    int intervalo = (resultado - max * prob_6) / tamanho;
    return intervalo + 1;
}

int main() {
    srand(time(NULL));
    long i;

    int pontos_trio = 0;
    for (i=0; i<3000000; i++) {
        int x = dado_viciado(0.5);
        int y = dado_viciado(0.5);
        int z = dado_viciado(0.5);
        if (x == y && x == z) {
            pontos_trio++;
        }
    }

    int pontos_dois_pares_seguidos = 0;
    for (i=0; i<3000000; i++) {
        int x = dado_viciado(0.5);
        int y = dado_viciado(0.5);
        int z = dado_viciado(0.5);
        int w = dado_viciado(0.5);
        if (x == y && z == w) {
            pontos_dois_pares_seguidos++;
        }
    }

    printf("\nPontos trio --> %d", pontos_trio);
    printf("\nPontos dois pares --> %d", pontos_dois_pares_seguidos);

    printf("\n");
    return 0;
}
