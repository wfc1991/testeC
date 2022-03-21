#include <stdio.h>

int main(void)
{
	//vetor para receber as temperaturas
	float amostraTemperaturaTrimestral[3][4] =
	{{25.4, 27.09, 28.90, 25.50},
	{21.80, 20.05, 22.90, 20.90},
	{18.8, 20.10, 17.70, 19.00}}
	
	printf("\n exemplo de acesso a matriz bidimensional");
	printf("\n *--------*");
	
	int indice_i;
	for (indice_i=0; indice_i < 3; indice_i++)
	
	{
		//laço de repetição para controlar as 3 linhas da matriz
		printf("\n *----- temperatura do mes : %d ----*", indice_i+1);
		int indice_j;
		for (indice_j=0; indice_j < 4; indice_j++)
		
		{
			//laço de repetição para controlar as 4 colunas da matriz
			printf("\n temperatura %d = %.2f", indice_j+1, amostraTemperaturaTrimestral[indice_i][indice_j]);
		}	
	}
	return 0;
}

