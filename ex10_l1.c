#include <stdio.h>

int main(){
	int i,alunos,nota1,nota2;
	float media1,media2,soma1 = 0,soma2 = 0;
	
	printf("Digite a quantidade de alunos: ");
	scanf("%d",&alunos);
	printf("Primeria discplina\n");
	
	for(i = 1; i <=alunos; i++){
		printf("Digite a nota do %d aluno:",i);
		scanf("%d",&nota1);
		soma1 += nota1;
	}
	
	printf("Segunda disciplina\n");
	
	for(i = 1; i <=alunos; i++){
		printf("Digite a nota do %d aluno:",i);
		scanf("%d",&nota2);
		soma2 += nota2;
	}

	media1 = soma1/alunos;
	media2 = soma2/alunos;
	printf("Media das notas dos alunos na primeira disciplina: %.1f\n ", media1);
	printf("Media das notas dos alunos na segunda disciplina: %.1f ", media2);
	
	return 0;
}
