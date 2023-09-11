#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// Usa o fscanf para Leitura e fprintf para gravação

int main()
{
    FILE *arqent,*arqsai;
    int qtd,mat;
    float nota,perc_a=0,perc_b=0,perc_c=0
         ,cont_ger=0,cont_a=0,cont_b=0,cont_c=0;
    char conceito,str[30];
    arqent= fopen("arqsai2.txt","r");
    if (!arqent)
    {
             printf("Erro ao abrir arquivo de Entrada"); 
             getch();
             return 1;
    }
    arqsai= fopen("resumo.txt","w");
    if (!arqsai)
    {
             printf("Erro ao abrir arquivo de Saida!"); 
             getch();
             return 1;
    }
    
    while (!feof(arqent)) 
    {
      fscanf(arqent,"%08d %s %f\n",&mat,&str,&nota);
      printf("%08d %-10s %f\n",mat,str,nota); 
      cont_ger = cont_ger + 1;
      if (nota > 7)
         cont_a = cont_a + 1; 
      else 
        if (nota > 5) 
           cont_b = cont_b + 1;
        else 
           cont_c = cont_c + 1;
    }
    
    printf("\nTotal de Alunos %.2f \nConceito A - %.2f \nConceito B - %.2f \nConceito C - %.2f \n",cont_ger,cont_a,cont_b,cont_c);  
    
    conceito = 'A';
    perc_a = (cont_a*100)/cont_ger;
    printf("\n%c %02.2f\n",conceito,perc_a);  
    fprintf(arqsai,"%c %02.2f\n",conceito,perc_a);  
    
    conceito = 'B';
    perc_b = (cont_b*100)/cont_ger;
    printf("%c %.2f\n",conceito,perc_b);  
    fprintf(arqsai,"%c %02.2f\n",conceito,perc_b);
    
    conceito = 'C';
    perc_c = (cont_c*100)/cont_ger;
    printf("%c %02.2f\n",conceito,perc_c);  
    fprintf(arqsai,"%c %02.2f\n",conceito,perc_c);  
      
    printf("\nArquivo Lido e Gravado \n\n"); 
    
    fclose(arqsai);
    fclose(arqent);
    getchar();
    return 0;
 }
