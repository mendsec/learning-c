/* Escreva um programa que recebe quatro números inteiros, calcula
	e apresenta a média aritmética entre eles. Observação: não esqueça
	de formatar o valor da média no momento de apresentá-lo, utilize
	duas casas decimais */
#include <stdio.h>
int main()
{
	float n1, n2, n3, n4, media;
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	printf("Digite a quarta nota: ");
	scanf("%f", &n4);
	media = (n1 + n2 + n3 + n4) / 4;
	printf("\nA media e: %.2f", media);
	return(0);
}
