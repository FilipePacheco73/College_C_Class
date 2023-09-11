#include <stdio.h>
#include <conio.h>   

 int main()
 {
    int i,vi,vs,cont=0;
    printf("\n Informe Valores para Conversao. Valor Inferior ");
    scanf ("%d",&vi);
    printf("\n                                 Valor Superior ");
    scanf ("%d",&vs);
    printf("\n\n\a  Valores da tabela ASC entre %d e %d\n\n",vi,vs);
        for (i=vi;i<vs;i++)
{
   printf("\n O VALOR DE %d DECIMAL Eh %c EM CARACTER ACSII",i,i);
         cont++;
         if (cont%21 == 0) 
         {
         printf("\n\n");
         system("PAUSE");}
}
    printf("\n\n");
    system("PAUSE");
    printf("\n\nPrograma sendo fechado ...");
//    sleep(3000);
    for (i=5;i>0;i--)
     {
      system("cls");
      printf("\n\n\aContagem Regressiva %d ...",i);
//      sleep(1000);
     }
    printf("\n\n\a\a\a\a\ BYE");
    system("cls");
  return (0);
 }
