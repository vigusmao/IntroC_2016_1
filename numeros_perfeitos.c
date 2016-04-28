#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int eh_perfeito(long numero) {
    int soma=1;
    int divisor=2;
    int raiz_quadrada = (int) sqrt(numero);
    if (raiz_quadrada*raiz_quadrada==numero) {
        soma+=raiz_quadrada;
    }

    while (divisor < raiz_quadrada) {
        if (numero%divisor==0) {
            soma+=divisor;
            soma+=(numero/divisor);
        }
        divisor++;
    }
    if (soma==numero) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int contador=0;
    long numero=2;
    while (contador<6) {
        if (eh_perfeito(numero)) {
            printf("%ld\n", numero);
            contador++;
        }
        numero++;
    }

    printf("\n");
    return 0;
}











