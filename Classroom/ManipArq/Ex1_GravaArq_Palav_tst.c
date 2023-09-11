#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// Usa o fprintf para gravação
// Recebe nome externo e testa existencia do arquivo
int main()
{
    FILE *arqsai;
    int mat;
    float nota;
    char nome[30],arq[10];
    printf("\nDigite o nome do arquivo - ");
    gets(arq);
    arqsai= fopen(arq,"r");
    while (arqsai)
        {
        printf("\nArquivo existente. Digite outro nome "); 
        gets(arq);
        arqsai= fopen(arq,"r");
        }   
    arqsai= fopen(arq,"w");
    if (!arqsai)
        {
        printf("\nErro ao abrir arquivo "); 
        exit(1); 
        }    
    printf("\nDigite a matricula do aluno - ");
    scanf("%08d",&mat);
    fflush(stdin);
    printf("\nDigite o Nome do aluno - ");
 //   gets(nome);
    scanf("%s",&nome);
    printf("\nDigite a nota do aluno - ");
    scanf("%f",&nota);

    fprintf(arqsai,"%08d %30s %5.2f\n",mat,nome,nota);

    printf("\n\n\nArquivo de Saida Gravado com o nome %s\n\n",arq); 
    getch();
    fclose(arqsai);
    return 0;
 }
