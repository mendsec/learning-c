#include <stdio.h> /* insere o conteúdo do arquivo stdio.h */
int main()
{ /* declaração de variáveis */
	int idade, ano;
	float altura;
	char nome[30];
	/* entrada de dados */
	printf("Digite o seu nome: "); /* mensagem ao usuário */
	scanf("%s", nome); /* leitura do nome */
	printf("Digite a idade: "); /* mensagem ao usuário */
	scanf("%d", &idade); /* leitura da idade */
	printf("Digite a altura: "); /* mensagem ao usuário */
	scanf("%f", &altura); /* leitura da altura */
	/* processamento */
	ano = 2024 - idade; /* cálculo do ano de nascimento */
	/* saída de dados */
	printf(" \nO nome é : %s", nome);
	printf(" \nA altura é : %.2f", altura); /* alterada para mostrar duas casas decimais*/
	printf(" \nA idade é : %d", idade);
	printf(" \nO ano de nascimento e : %d", ano);
	return(0);
}
