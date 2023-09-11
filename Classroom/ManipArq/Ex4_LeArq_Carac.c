#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// Usa o fgetc para leitura - Caracter a caracter
int main()
{
    FILE *arqent;
    char ch;
    arqent= fopen("saida.dat", "r");
    if (!arqent)
    {
             printf("Erro ao abrir arquivo !"); 
             getch();
             return 1;
    }
    do 
    {
             ch= fgetc(arqent);
             printf("%c",ch); 
             sleep(500);
    }         
    while (ch != EOF);
          
    fclose(arqent);
    getchar();
    
	return 0;
 }
