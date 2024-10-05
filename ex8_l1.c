#include <stdio.h>

int main() {
    int num, i;
    int primo = 1; 

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 1) {
        primo = 0; 
    } else {
         for (i = 2; i < num; i++) {
            if (num % i == 0) {
                primo = 0; 
                break; 
            }
        }
    }
    
    if (primo) {
        printf("%d eh um numero primo.\n", num);
    } else {
        printf("%d nao eh um numero primo.\n", num);
    }

    return 0;
}

