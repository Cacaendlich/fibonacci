#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
	int v1, v2, v3, limite, cont;
	
	setlocale (LC_ALL, "Portuguese");
	printf ("\n********SEQUÊNCIA DE FIBONACCI*********\n");
	
	{
		printf("Qual o limite? ");
		scanf ("%d",&limite);
		//limite = 10;
		printf("limite: %d\n", limite);
		v1 = 1;
		v2 = 1;
		printf("\%d %d ", v1,v2);
		cont = 1;
		while(cont<=limite)
		{
			v3 = v1 + v2;
			v1 = v2;
			v2 = v3;
			printf("%d ", v3);
			cont = cont + 1;
		}
	}

}
