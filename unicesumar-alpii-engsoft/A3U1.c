/* Escreva um programa que lê um número positivo inteiro e apresente
	o quadrado e a raiz quadrada deste número */
#include <stdio.h>
#include <math.h>
int main()
{
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	printf("\nO quadrado de %d e %.2f", numero, pow(numero,2));
	printf("\nA raiz quadrada de %d e %.2f\n", numero, sqrt(numero));
	return(0);
}
