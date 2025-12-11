#include <stdio.h>
int main()
{
	int num, ant, suc;
	printf("Digite um numero: ");
	scanf("%d", &num);
	ant = num - 1;
	suc = num + 1;
	printf("\n O antecessor e: %d", ant);
	printf("\n O sucessor e: %d", suc);
	return(0);
}
