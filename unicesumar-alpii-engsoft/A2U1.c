/* Escreva um programa que leia o nome de uma pessoa e escreva a seguinte
	mensagem "Bem-vindo à disciplina de Algoritmos e Lógica de Programação II, Fulano." */
#include <stdio.h>
int main()
{
	char nome[20]; /*  limita a variável nome para receber até 20 letras */
	printf("Digite o seu nome: ");
	scanf("%s", nome);
	printf(" \nBem-vindo a disciplina de Algoritmos e Logica de Programacao II, %s.", nome);
	return(0);
}
