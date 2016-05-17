#include<stdlib.h>
#include<stdio.h>

typedef struct {
    int n_quartos;
    int n_banheiros;
    float preco;
    char endereco[50];
} CASA;


int main() {
    // CASA meu_array_estatico_de_inteiros[10];
    CASA* meu_array_dinamico_de_casas;
    meu_array_dinamico_de_casas = (CASA*) malloc(10 * sizeof(CASA));
}


