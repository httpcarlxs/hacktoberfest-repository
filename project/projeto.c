#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <string.h>

void imprimir_tabuleiro(char tab[3][3]);

int main()
{
	return 0;
}

void imprimir_tabuleiro(char tab[][3])
{
	int j, k;
	for(j = 0; j < 3; j++)
	{
		for(k = 0; k < 3; k++)
		{
			if(tab[j][k] != 'X' && tab[j][k] != 'O')
				printf("\t \t");
			else
				printf("\t%c\t", tab[j][k]);
			
			if(k < 2)
				printf("|");
		}
		
		if(j < 2)
			printf("\n__________________________________________________\n\n");
	}	
}
