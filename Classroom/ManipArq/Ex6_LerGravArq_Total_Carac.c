#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Usa o fgetc para leitura e o fputc para gravação - Caracter a caracter
int main()
{
    FILE *arqent,*arqsai;
    char ch,chs;
    arqent= fopen("aula.dat", "r");
    if (!arqent)
    {
             printf("Erro ao abrir arquivo !"); 
             getch();
             return 1;
    }
    arqsai= fopen("saida_ex6.dat", "w");
    if (!arqsai)
    {
             printf("Erro ao abrir arquivo !"); 
             getch();
             return 1;
    }
    ch= fgetc(arqent);
    while (ch != EOF) 
    {
             printf("%c",ch); 
             chs=ch;
             fputc(chs,arqsai); // Grava caracter lido no arquivo de saída         
             ch= fgetc(arqent);
    }         
    fclose(arqent);
    fclose(arqsai);
    getchar();
    
	return 0;
 }
