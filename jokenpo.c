#include<stdlib.h>
#include<stdio.h>

void jokenpo(int mao) {
    if (mao == 0) {
        printf("pedra");
    } else if (mao == 5) {
        printf("papel");
    } else if (mao == 2) {
        printf("tesoura");
    }
}

void jokenpo_2(int mao) {
    switch (mao) {
    case 0:
        printf("pedra");
    case 2:
        printf("tesoura");
    case 5:
        printf("papel");
    }
}

int main() {
    int x;
    while (1) {
        scanf("%d", &x);
        jokenpo_2(x);
    }
    return 0;
}
