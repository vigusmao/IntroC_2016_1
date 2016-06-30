#include <time.h>
#include "matriz.cpp"

int sortear(int a, int b) {
    return rand() % (b-a+1) + a;
}

int main(){
    srand(time(NULL));

    Matriz matA(3,3);
    Matriz matB(3,3);

    matA.inicializar_identidade();
    matA.imprimir();

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            matB.escrever(i, j, sortear(1, 100));
        }
    }
    matB.imprimir();

    matB.somar(matA);
    matB.imprimir();

    return 0;
}
