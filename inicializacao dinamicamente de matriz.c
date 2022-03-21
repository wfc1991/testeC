#include <stdio.h>
//variaveis globais
//vetor para receber as temperaturas digitadas
float amostraTemperaturaTrimestral[3][4];
void entradaTemperaturas()
{
	int indice1;
	for(indice1= 0; indice1 < 3; indice1++)
	{
	int indice2;
	for(indice2= 0; indice2 < 4; indice2++)
	{
		printf("\n informe a temperatura #%d para o mes #%d: ", indice2 + 1, indice1 +1);
		scanf("%f", amostraTemperaturaTrimestral[indice1][indice2]);
	}
	}
}
int main(void)
{
	entradaTemperaturas();
	printf("\n exemplo de acesso a matriz bidimensional");
	printf("\n *--------------*");
	int indice_i;
	for(indice_i= 0; indice_i < 3; indice_i++)
	{
		printf("\n *---- temperaturas do mes : %d -------*", indice_i + 1);
		//laço de repetição para solicitar as temperaturas
		int indice_j;
		for(indice_j= 0; indice_j < 4; indice_j++)
		{
			printf("\n temperatura %d = %.2f", indice_j + 1, amostraTemperaturaTrimestral[indice_i][indice_j]);
		}
	}
	return 0;
}
