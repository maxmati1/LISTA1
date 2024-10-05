#include <stdio.h>

int main() {
    int opcao = 0; 
    float temp, temp2;

    while (opcao != 3) {  
        printf("Escolha uma opcao:\n1. Celsius para Fahrenheit\n2. Fahrenheit para Celsius\n3. Parar\n");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp);
            temp2 = (temp * 9 / 5) + 32;
            printf("A temperatura em Fahrenheit eh: %.2f\n",temp2);
        } else if (opcao == 2) {
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temp);
            temp2 = (temp - 32) * 5 / 9;
            printf("A temperatura em Celsius eh: %.2f\n", temp2);
        } else if (opcao == 3) {
            break;
        } else {
            printf("Opcao invalida\n");
        }
    }

    return 0;
}

