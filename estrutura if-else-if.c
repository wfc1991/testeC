#include <stdio.h>
int main(void)
{
	int idade;
	printf("\n Entre com a idade: ");
	scanf("%d", idade);
	if (idade >= 0 idade < 16);
	{
	printf("\n � uma crian�a");	
	}
	else if(idade >= 16 idade < 22);
	printf("\n � um adulto");
	else
	printf("\n � terceira idade");
	printf("\n este comando esta fora da cadeia de ifs");
	return 0;
	
}
