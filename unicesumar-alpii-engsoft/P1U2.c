/* Estrutura condicional simples em C */
#include <stdio.h> /* esta instrução insere o conteúdo
do arquivo stdio.h */
#include <math.h> /* insere o conteúdo do arquivo, que 
tem a função sqrt, calcula a raiz quadrada */
int main() /* todo programa em C deve possuir essa linha */
{ /* delimita o início das instruções */
	int num;
	float raiz;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	if(num % 2 == 0)
	{
		raiz = sqrt(num);
		printf("A raiz quadrada e: %.3f", raiz);
	}
	return(0); /* este retorno indica que não houve erro */
} /* delimita o fim do conjunto de instruções da função main */
