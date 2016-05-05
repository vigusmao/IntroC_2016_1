#include<stdlib.h>
#include<stdio.h>

char definir_conceito(float media) {
    if (media >= 9) {
        return 'A';
    } else if (media >= 7) {
        return 'B';
    } else if (media >= 5) {
        return 'C';
    } else {
        return 'D';
    }
}

void imprimir_conceito(char conceito) {
    printf("\nConceito = %c", conceito);
    switch (conceito) {
        case 'A':
            printf(" Excelente!");
            //break;
        case 'B':
            printf(" Muito bom!");
            //break;
        case 'C':
            printf(" Ok!");
            //break;
        default:
            printf(" Tente de novo!");
    }
}

int main() {

    float nota;
    float soma = 0;
    int contador = 0;
    float media;
    char conceito;

    for (;;) {  // loop infinito
        printf("Digite a proxima nota: ");
        scanf("%f", &nota);
        if (nota > 10) {
            printf("Nota invalida!\n");
            continue;  // vamos ignorar esta nota!
        }
        if (nota < 0) {
            break;
        }
        soma += nota;
        contador++;
    }
    media = soma / contador;
    printf("\nMedia = %.1f", media);

    conceito = definir_conceito(media);
    imprimir_conceito(conceito);

    printf("\n\n");
    return 0;
}



