#include<stdlib.h>
#include<stdio.h>


int main() {

    int numeros[10];
    int i;
    for (i=0; i<10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
    int eh_palindromo = 1;  // verdadeiro
    for (i=0; i<5; i++) {
        if (numeros[i] != numeros[9-i]) {
            eh_palindromo = 0;  // falso
            break;
        }
    }

    if (eh_palindromo) {
        printf("EH PALINDROMO!!!!");
    } else {
        printf("Nao eh palindromo.");
    }

    printf("\n\n");
    return 0;
}
