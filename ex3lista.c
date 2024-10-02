#include <stdio.h>

int main() {
    int i, n;
    float m,soma;
    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);
		soma += n;
    }
    m = soma / 5;
    printf("A media eh: %.2f\n", m);
    return 0;
}
