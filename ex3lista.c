#include <stdio.h>

int main() {
    int i, n[5];
    float m;
	int soma = 0;
    for (i = 0; i < 5; i++) {
        printf("Digite um n�mero: ");
        scanf("%d", &n[i]);
    }
    
    for (i = 0; i < 5; i++) {
        soma += n[i];
    }
    m = soma / 5.0;
    printf("A m�dia �: %.2f\n", m);
    return 0;
}

