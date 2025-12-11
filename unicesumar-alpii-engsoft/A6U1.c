#include <stdio.h> /* insere o conteúdo do arquivo stdio.h */
int main()
{
	/* declaração das variáveis*/
	int num1, num2, total;
	/* entrada de dados */
	printf("Digite o primeiro numero: "); /* mensagem ao usuário */
	scanf("%d", &num1); /* leitura do primeiro número */
	printf("Digite o segundo numero: "); /* mensagem ao usuário */
	scanf("%d", &num2); /* leitura do segundo número */
	/* processamento */
	total = num1 + num2; /* cálculo do ano de nascimento */
	/* saída de dados */
	printf("\n A soma dos numeros e: %d", total);
	return(0);
}
