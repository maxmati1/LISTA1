#include <stdio.h>

int main() {
    int num, maior = 0, positivo = 0,menor;


    printf("Digite uma sequencia de numeros inteiros positivos:\n");

    do {
        scanf("%d", &num);
        if (num > 0) {
            if (maior == 0) {
                maior = num;
                menor = num;
            } else {
                if (num > maior) {
                    maior = num;
                }
                if (num < menor) {
                    menor = num;
                }
            }
            positivo = 1;
        }
    } while (num >= 0);

    if (positivo) {
        printf("O maior numero eh: %d\n", maior);
        printf("O menor numero eh: %d\n", menor);
    } else {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    return 0;
}

