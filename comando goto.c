#include <stdio.h>
int main(void)
{
	int contador = 0;
	loop1:
		if(contador++ <10)
		{
			printf("\n contador = %d", contador);
			goto loop1;
		}
		return 0;
}
