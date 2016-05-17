#include<stdlib.h>
#include<stdio.h>

int main() {
    int senha1, senha2;

    for(;;) {   // loop infinito
        printf("\nDigite sua senha: ");
        scanf("%d", &senha1);
        if (senha1 < 100000 || senha1 > 999999) {
            printf("\nA senha precisa ter 6 digitos!");
            continue;
        }
        printf("\nConfirme sua senha: ");
        scanf("%d", &senha2);
        if (senha1 != senha2) {
            printf("\nAs duas senhas nao casam!");
            continue;
        }
        break;
    }
    printf("\nSenha cadastrada com sucesso!");
    return 0;
}
