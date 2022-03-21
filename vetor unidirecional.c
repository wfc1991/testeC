#include <stdio.h>
int main(void)
{
	float notas[4] = {4.5, 5.0, 4.0, 6.0};
	float soma = 0;
	int indice;
	for(indice; indice < 4; indice++)//laço de repetição para acessar as 4 posicoes do vetor
	{
		soma = soma + notas[indice];
	}
	printf("\n a media das notas e: %.2f", soma/4);
	return 0;
}
