#include <stdio.h>
#include <stdbool.h>
//função com retorno de valor booleano
bool verificaPar(int numero)
{
	if(numero % 2 == 0)
	{
		return true; //retorna true, indica que o valor é par
	} else{
		return false; // retorna false, indica que o valor é impar
	}
}
int main(void)
{
	int numeroEntrada = 4;
if(verificaPar(numeroEntrada))
print("\n sim. O numero e par", numeroEntrada);
else
printf("\n não. o numero e impar", numeroEntrada);
return 0;
}



