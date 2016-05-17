#include<stdlib.h>
#include<stdio.h>

int main() {

    int numeros[10];
    int i;
    for (i=0; i<10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    int menor, maior;

    menor = numeros[0];
    maior = numeros[0];
    for (i=1; i<10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("Menor = %d, Maior = %d", menor, maior);
    printf("\n\n");
    return 0;
}
