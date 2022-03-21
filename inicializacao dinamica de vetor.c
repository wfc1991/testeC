#include <stdio.h>
int main(void)
{
	float notas[4];
	float soma = 0;
	printf("\n exemplo de inicializacao dinamica de vetor");
	printf("\n *-----------*");
	int indice1;
	for(indice1 = 0; indice1 < 4; indice1++)//laço de repetição para solicitar as 4 notas
	{
		printf("\n informe a nota %d = ", indice1+1);
		scanf("%f", notas[indice1]);//le do teclado a opcao
	}
	int indice2;
	for(indice2 = 0; indice2 < 4; indice2++)//laço de repetição para acessar as 4 posicoes do vetor - acumula na variavel soma cada nota do vetor
	{
		soma = soma + notas[indice2];
	}
	printf("\n a media das notas e: %.2f", (soma/4));
	return 0;
}
