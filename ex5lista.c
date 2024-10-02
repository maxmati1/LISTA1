#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i,n;
	i=0;

	srand(time(0));
	int anum = rand()%100;
	printf("Bem vindo ao jogo de adivinhacao\nDigite seu palpite:");
	scanf("%d",&n);
	i=i+1;
	do{
		if(n ==anum){
			printf("Parabens, voce acertou");
			return 0;
		}
		else if(n>anum){
			printf("Numero Errado,o numero é menor!Tente denovo\nDigite seu palpite:");
			scanf("%d",&n);
			i=i+1;
		}else if(n<anum){
			printf("Numero Errado,o numero é maior!Tente denovo\nDigite seu palpite:");
			scanf("%d",&n);
			i=i+1;
		}
		
	}while(i<10);
	printf("Tentativas acabaram o numero eh:%d",anum);
	
	
    return 0;
}

