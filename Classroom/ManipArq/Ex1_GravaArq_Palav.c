#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// Usa o fprintf para gravação
int main()
{
    FILE *arq;
    int i,mat,qtd;  float nota;   char str[30];

    arq= fopen("arqsai2.txt","w");
    printf("\nDigite qtde de alunos para digitar notas - ");
    scanf("%08d",&qtd);
    for (i=1;i<=qtd;i++)
    {
     printf("\nDigite a matricula do %d.o aluno - ",i);
     scanf("%08d",&mat);
     printf("\nDigite o Nome do aluno - ");
//     gets(str);
     scanf("%s",&str);
     fflush(stdin);
     printf("\nDigite a nota do aluno - ");
     scanf("%f",&nota);
     fprintf(arq,"%08d %30s %02.2f\n",mat,str,nota);
    }
    printf("\n\n\nArquivo de Saida Gravado com o nome 'arqsai2.txt'\n\n"); 
    getch();
    fclose(arq);
    return 0;
 }
