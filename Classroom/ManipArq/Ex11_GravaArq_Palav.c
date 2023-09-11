#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// Usa o fprintf para gravação
int main()
{
    FILE *arqsai;
    int qtd,mat;
    float nota;
    char str[30];
//    arqsai= fopen("C:\\temp\arqsai.txt","w");
    arqsai= fopen("arqsai.txt","w");
    if (!arqsai)
    {
             printf("Erro ao abrir arquivo de Saida!"); 
             getch();
             return 1;
    }
    
    printf("\nDigite a Qtde de alunos - "); 
    scanf("%d",&qtd); 
//    printf("\nValor de qtd %d\n",qtd);
//    getchar();
    while (qtd>0) 
    {
      printf("\nDigite a matricula do aluno - ");
      scanf("%08d",&mat);
      printf("\nDigite o Nome do aluno - ");
      scanf("%s",&str);
      printf("\nDigite a nota do aluno - ");
      scanf("%f",&nota);

      fprintf(arqsai,"%08d %s %02.2f\n",mat,str,nota);
      if (!arqsai)
      {
             printf("Erro ao gravar arquivo de Saida!"); 
             getch();
             return 1;
      }     
      printf("\n========================================\n");  
      printf("\nDados Parciais Gravados - %08d %s %02.2f\n",mat,str,nota);  
      printf("\n========================================\n");  
      qtd--;
    }         
    printf("\n\n\nArquivo de Saida Gravado \n\n"); 
    getch();
    fclose(arqsai);
    if (!arqsai)
    {
             printf("Erro ao Fechar arquivo de Saida!"); 
             getch();
             return 1;
    }
    return 0;
 }
