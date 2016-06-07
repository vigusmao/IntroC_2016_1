#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int sorteie(int a, int b) {
    return rand() % (b-a+1) + a;
}

int main() {
    srand(time(NULL));

    int n_andares, andar_mais_alto_que_nao_quebra;
    int bola_da_vez=1, cont_lancamentos=0;

    printf("\nQuantos andares? ");
    scanf("%d", &n_andares);

    andar_mais_alto_que_nao_quebra = sorteie(0, n_andares);

    while (bola_da_vez<=2) {
        printf("\nJogue a %da bola: ", bola_da_vez);
        int andar;
        scanf("%d", &andar);
        cont_lancamentos++;
        if (andar > andar_mais_alto_que_nao_quebra) {
            printf("QUEBROU!!!!");
            bola_da_vez++;
        } else {
            printf("NAO QUEBROU!");
        }
    }

    printf("\nQual a resposta? ");
    int resposta_do_usuario;
    scanf("%d", &resposta_do_usuario);

    if (resposta_do_usuario==andar_mais_alto_que_nao_quebra) {
        printf("\nCERTO!");
    } else {
        printf("\nERRADO!! O correto eh %d.", andar_mais_alto_que_nao_quebra);
    }

    printf("\nVoce fez %d lancamentos.", cont_lancamentos);
    printf("\n");

    return 0;
}
