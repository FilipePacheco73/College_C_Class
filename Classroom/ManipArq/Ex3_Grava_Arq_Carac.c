#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Usa o fputc para grava��o - Caracter a caracter do teclado
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
    while ((ch = getche()) != '\r') // \r - Identifica final da digita��o
    {
      fputc(ch,arqsai); // Grava caracter lido no arquivo de sa�da         
    }         

    fclose(arqsai);
    printf("\nArquivo saida.dat gravado \n\n"); 
    getch();
	return 0;
 }
