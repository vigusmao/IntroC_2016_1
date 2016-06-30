#include<iostream>

#ifndef MATRIZ_H
#define MATRIZ_H

using namespace std;

class Matriz {
    private:
        int n_linhas;
        int n_colunas;
        int** celulas;
    public:
        Matriz(int linhas, int colunas);
        virtual ~Matriz();
        void imprimir();
        int ler(int i, int j);
        void escrever(int i, int j, int valor);
        void zerar();
        void inicializar_identidade();
        int traco();
        void somar(Matriz outra);
        void multiplicar(int x);
} ;

#endif // MATRIZ_H






