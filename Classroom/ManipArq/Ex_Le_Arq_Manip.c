#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// Usa o fgetc para leitura - Caracter a caracter
//int le_arq (char nome_arq[10])
int main()
{   FILE *arqent;
    char ch;
    arqent= fopen("manip_arq.txt","r");
    if (!arqent)
    { printf("Erro ao abrir arquivo !"); getch(); exit(1);     }
    do 
     { ch= fgetc(arqent);
       if (ch == '+') { getch(); system("cls");}
       else printf("%c",ch);
     }while (ch != EOF);
    fclose(arqent);    
    getch();
 }
