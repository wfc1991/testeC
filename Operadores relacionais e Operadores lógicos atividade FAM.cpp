#include <stdio.h>
int main ()
{
	int iJ, iI;
	iJ = 18; iI = 60;
	int idade = 59;
	if((idade > iJ)&&(idade < iI)){
		//se isso for V ou se isso for V
		//a meia-idade se caracteriza por qualquer pessoa que tenha
		//menos de 60 anos e mais de 17 anos
		printf("A idade informada é de uma pessoa de meia-idade.");
	} else{
		if (idade >= iI){
			printf("\nA idade informada é de uma pessoa idosa.");
		}else{
			printf("\nA idade informada é de uma pessoa jovem.");
	}
}

return 0;
}
