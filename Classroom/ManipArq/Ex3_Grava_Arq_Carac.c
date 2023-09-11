#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Usa o fputc para gravação - Caracter a caracter do teclado
int main()
{
    FILE *arqsai;
    char ch;
    arqsai= fopen("saida.dat", "w");
    if (!arqsai)
    {
             printf("Erro ao abrir arquivo !"); 
             getch();
             return 1;
    }
    while ((ch = getche()) != '\r') // \r - Identifica final da digitação
    {
      fputc(ch,arqsai); // Grava caracter lido no arquivo de saída         
    }         

    fclose(arqsai);
    printf("\nArquivo saida.dat gravado \n\n"); 
    getch();
	return 0;
 }
