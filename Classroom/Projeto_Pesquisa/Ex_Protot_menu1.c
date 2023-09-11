#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// Trabalho de equipe função relógio
int prog1 ()// Contagem progressiva
 {
   	  int h,s=0,m=0;
      for (h=0; h<60; h++)
      {
       for (m = 0;   m < 60;   m++)
       {
        for (s = 0;   s < 60;   s++)
        {	  
         system("cls");   
         printf ("\n\nRelogio %02d : %02d : %02d ",  h,m,s);
         sleep(1000);
       }
       }
       }
         
       system("PAUSE");
 }

int prog2 () // Contagem regressiva
 {
    int s=0,m=0;
    for (h=0; h<60; h++)
      {
      for (m = 60;   m >0;   m--)
      {
       for (s = 60;   s > 0;   s--)
       {	  
        system("cls");   
        printf ("\n\nRelogio %02d : %02d ",  m,s);
        sleep(1000);
      }
      }  
      }    
      system("PAUSE");
 }
void formata_menu ()
{
        system("cls");  // Limpa Tela
        system("color F1");
		printf("\n\t\t\t\tPROJETO FTC\n");
		printf("\t\t\t\t===========\n\n");

		printf("\t\t\tDISCIPLINA: PROGRAMACAO DE COMPUTADORES\n");
		printf("\t\t\tPROFESSOR : HUMBERTO DO VAL\n\n\n");

		printf("\t\t\tEQUIPE : ALUNO 1\n\n");
		printf("\t\t\t         ALUNO 2\n\n");
		printf("\t\t\t         ALUNO 3\n\n\n");

        printf("\t\t\t\t1 - PROGRAMA 1 \n\n");
		printf("\t\t\t\t2 - PROGRAMA 2\n\n");

		printf("\t\t\t\t3 - SAIR\n\n");
		printf("\n\t\t\tDIGITE A SUA OPCAO:\t");
}
void apresenta_resultado (int opcao)
{
        system("cls");  // Limpa Tela
		printf("\n\n\t\t\t\tPROJETO FTC\n");
		printf("\t\t\t\t===========\n\n");

		printf("\t\t\tDISCIPLINA: PROGRAMACAO DE COMPUTADORES\n");
		printf("\t\t\tPROFESSOR : HUMBERTO DO VAL\n\n\n");

		printf("\t\t\tEQUIPE : ALUNO  Rafael Torres Sales\n\n");
		printf("\t\t\t         ALUNO Elder Galeno\n\n");
		printf("\t\t\t         ALUNO Marcelo Sena\n\n\n");

        printf("\t\t\t\tEXECUCAO DO PROGRAMA %d\n\n",opcao);
        printf("\t\t-------------------------------------------------------\n");
sleep(3000);
}

int main()
{
   int opcao,i,f,n;
   while (opcao != 3)
   {    formata_menu();
      	scanf("%d", &opcao);
       	switch (opcao)
         {
         case 1:
	    	apresenta_resultado (opcao);
		    prog1();       system("PAUSE");
          	break;
         case 2:
		    apresenta_resultado (opcao);
		    prog2();       system("PAUSE");
          	break;
	    case 3:
               	printf("\n\t\t\tSaindo do programa ... Aguarde ");
          	break;
      	default :
            printf("\n\t\t\tOpcao incorreta ...\n\n\t\t\tAguarde 3s e digite novamente");
            sleep(2000);
          	break;
          }
   }
sleep(2000);
//system("PAUSE");
}
