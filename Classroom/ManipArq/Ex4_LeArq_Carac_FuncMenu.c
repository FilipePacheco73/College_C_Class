#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// Usa o fgetc para leitura - Caracter a caracter
//int le_arq (char nome_arq[10])
int le_arq (char nome_arq[10])
{
    FILE *arqent;
    char ch;
    arqent= fopen(nome_arq, "r");
    if (!arqent)
    { printf("Erro ao abrir arquivo !"); getch(); exit(1);     }
    do 
     { ch= fgetc(arqent);
       if (ch == '+') { getch(); system("cls");}
       else printf("%c",ch);
     }while (ch != EOF);
    fclose(arqent);    
}    
void prog2 ()
 {
      printf("\n\Programa 2\n");
 }
void formata_menu ()
{
        system("cls");  // Limpa Tela
        system("color F1"); 
		
		printf("\n\n\t\t\tDISCIPLINA: PROGRAMACAO DE COMPUTADORES\n");
		printf("\n\t\t\t\tPROFESSOR : HUMBERTO DO VAL\n\n\n");
		
        printf("\t\t\t\t1 - Aula - Manipulacao Arquivo \n\n");
		printf("\t\t\t\t2 - Aula - Funcao \n\n");
		
		printf("\t\t\t\t3 - SAIR\n\n");
		printf("\n\t\t\tDIGITE A SUA OPCAO:\t");
}
int main()
{
    int opcao,i,f,n;
	while (opcao != 3)
   {
		formata_menu();
      	scanf("%d", &opcao);
       	switch (opcao)
         { 
         case 1: 
              system("cls");  // Limpa Tela
              le_arq("manip_arq.txt");
              getch();
              system("cls");  // Limpa Tela
              le_arq("fim.txt");
              getch();
              break; 
         case 2: 
            prog2();
            system("PAUSE");
          	break; 
	    case 3: 
               	printf("\n\t\t\tSaindo do programa ... Aguarde ");
          	break; 
      	default : 
                printf("\n\t\t\tOpcao incorreta ...\n\n\t\t\tAguarde 3s e digite novamente");
                sleep(3000);
          	break; 
          } 
       }
sleep(3000);
return(0);
system("PAUSE");

 }
