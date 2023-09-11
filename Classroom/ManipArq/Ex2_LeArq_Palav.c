#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// Usa o fscanf para Leitura 
int main()
{
    FILE *arqent;
    int mat;
    float nota;
    char str[30];
    arqent= fopen("arqsai2.txt","r");
    if (!arqent)
    {
             printf("Erro ao abrir arquivo de Entrada"); 
             getch();
             exit (1);
    }
    while (!feof(arqent)) //Efetua leitura ate final do arquivo
    {
      fscanf(arqent,"%08d %s %f\n",&mat,&str,&nota);
      printf("%08d %-10s %f\n",mat,str,nota); 
    }
    printf("\nArquivo lido e demonstrado na tela \n\n"); 
    fclose(arqent);
    getch();
    return 0;
 }
