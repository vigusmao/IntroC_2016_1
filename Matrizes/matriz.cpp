#include <iostream>
#include "matriz.h"

Matriz::Matriz(int linhas, int colunas) {
    n_linhas = linhas;
    n_colunas = colunas;
    celulas = (int**) malloc(n_linhas * sizeof(int*));
    int i;
    for (i=0; i<n_linhas; i++) {
        celulas[i] = (int*) malloc(n_colunas * sizeof(int));
    }
}

Matriz::~Matriz() {

}

void Matriz::imprimir() {
    int i, j;
    for(i=0; i<n_linhas; i++){
        for (j=0; j<n_colunas; j++){
            cout << celulas[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int Matriz::ler(int i, int j) {
    if (i>=n_linhas || j>=n_colunas || i<0 || j<0) {
        cout<<"Celula invalida!"<<endl;
        return 0;
    }
    return celulas[i][j];
}

void Matriz::escrever(int i, int j, int valor) {
    if (i>=n_linhas || j>=n_colunas || i<0 || j<0) {
        cout<<"Celula invalida!"<<endl;
    } else {
        celulas[i][j] = valor;
    }
}

void Matriz::zerar() {
    for(int i=0; i<n_linhas ; i++){
        for(int j=0; j<n_colunas; j++){
            celulas[i][j] = 0;
        }
    }
}

void Matriz::inicializar_identidade() {
    for(int i=0; i<n_linhas ; i++){
        for(int j=0; j<n_colunas; j++){
            if(j==i){
                celulas[i][j] = 1;
            }else{
                celulas[i][j] = 0;
            }
        }
    }

}

int Matriz::traco() {
    int soma = 0;
    for(int i=0; i<n_linhas ; i++){
        soma+= celulas[i][i];
    }
    return soma;

}

void Matriz::somar(Matriz outra) {
    for(int i=0; i<n_linhas ; i++){
        for (int j= 0; j<n_colunas; j++){
                celulas[i][j]+= outra.ler(i,j);
        }
    }
}

void Matriz::multiplicar(int x) {
    for(int i=0; i<n_linhas ; i++){
        for (int j= 0; j<n_colunas; j++){
                celulas[i][j] *= x;
        }
    }
}





