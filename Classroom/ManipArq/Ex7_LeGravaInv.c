#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// Elaborar programa para ler um arquivo e gerar outro com a informação invertida
// usando o fgetc para leitura e o fputc para gravação - Caracter a caracter
int main()
{
    FILE *arqent,*arqsai;
    char ch,st[80];
    int i=0,j=0;
    arqent= fopen("textoc.dat", "r");
    if (!arqent)
    {
             printf("Erro ao abrir arquivo !"); 
             getch();
             return 1;
    }
    arqsai= fopen("textoi.txt", "w");
    if (!arqsai)
    {
             printf("Erro ao abrir arquivo de Saida!"); 
             getch();
             return 1;
    }
    do 
    {
             ch= fgetc(arqent);
             st[i]=ch;
             printf("%c",st[i]); 
             i++;
    }         
    while (ch != EOF);
    
    printf("\n");
    i--; i--;
    
    while (i>=0)
    {
         fputc(st[i],arqsai);
//         fprintf("%c",st[i]); 
         printf("%c",st[i]); 
         i--;  
    }
    
    fclose(arqent);
    fclose(arqsai);
    getchar();
	return 0;
}
