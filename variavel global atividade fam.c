#include <stdio.h>
int contador = 100; //declara��o de variavel global "contador"
void funcao1AlteraContador()
{
	contador = contador +10;
	printf("Neste momento #1 a variavel contador = %d\n", contador);
	
}
void funcao2AlteraContador()
{
	contador = contador +20;
	printf("Neste momento #2 a variavel contador = %d\n", contador);
	
}
int main(void) {
	printf("Neste momento #0 a variavel contador = %d\n", contador);
	
	funcao1AlteraContador();
	
	funcao2AlteraContador();
	
	contador = contador + 30;
	
	printf("Neste momento #3 a variavel contador = %d\n", contador);
	
	return 0;
}

