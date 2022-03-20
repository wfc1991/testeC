#include <stdio.h>
int main(void)
{
	int contador=1;
	for(contador= 1; contador <= 100; contador++)
	{
		printf("\n valor de contador = %d", contador);
		if(contador == 10)
		break;
	}
	return 0;
}
