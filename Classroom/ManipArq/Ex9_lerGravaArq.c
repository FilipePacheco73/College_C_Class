#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
FILE *p;
char str[80],c;

/* Le um nome para o arquivo a ser aberto: */
printf("\n\n Entre com um nome para o arquivo:\n");
gets(str);

if (!(p = fopen(str,"w")))  /* Caso ocorra algum erro na abertura do arquivo..*/ 
  {                         /* o programa aborta automaticamente */
  printf("Erro! Impossivel abrir o arquivo!\n");
    getch();
  exit(1);
  }
/* Se nao houve erro, imprime no arquivo, fecha ...*/
fprintf(p,"Este e um arquivo chamado : %s\n", str);
fclose(p);

/* abre novamente para a leitura por caracter, imprime e fecha. */
p = fopen(str,"r");
while (!feof(p))
 {
  fscanf(p,"%c",&c);
  printf("%c",c);
  } 
fclose(p);
  getch();
}	
