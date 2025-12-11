/* Escreva um programa que dado o raio de um círculo calcule sua área
	e o perímetro. A área é a superfície do objeto, dada por A = (pi*r)²
	e o perímetro é a medida do contorno do objeto, dado por P = 2*pi*r
	Dica: utilize as funções intrísecas vistas na unidade */
#include <stdio.h>
#include <math.h>
#define pi 3.141593
int main()
{
	float r; //r será o raio da circunferência
	printf("Digite o valor do raio: ");
	scanf("%f", &r);
	printf("\n Valor da area: %f", pi*pow(r,2));
	printf("\n Valor do perimetro: %f", 2*pi*r);
	return(0);
}
