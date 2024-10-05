#include <stdio.h>

int main(){
	int n,i;
	float h,media,soma = 0;
	
	printf("Digite o numero de alunos na sala: ");
	scanf("%d",&n);
	
	for(i = 1;i <= n;i++){
		printf("Digite a altura do %d aluno:(ex:1.70) ",i);
		scanf("%f",&h);
		soma += h;
	}
	media = soma/n;
	printf("A media de altura dos alunos eh: %.2f", media);
	return 0;
}
