#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main ()
{   
    int K;
    char esc;
    REINICIO:
    system ("color 1A");
    printf(" *************************  PROJETO DE PROGRAMA\x80\x8EO  *************************** ");
    printf(" *                                                                            * "); 
    printf(" *                                                                            * "); 
    printf(" *      Alunos: Fagner Pinheiro, Filipe Pacheco e Jackson Vasconcelos         * ");
    printf(" *                                                                            * ");
    printf(" *                                                                            * ");
    printf(" *                        Professor:  Humberto do Val                         * ");
    printf(" *                                                                            * ");
    printf(" ****************************************************************************** ");
    printf("\n\n");
    printf("\nFa%ca a escolha de qual programa ir\xA0 utilizar !!!\n",135);
    printf("\nDigite o n\xA3mero correspondente ao programa\n");
    printf("\n1- Para utilizar nosso simulador da MEGA-SENA\n"); 
    printf("\n2- Para utilizar nossa Urna Eletr%cnica\n", 147);
    printf("\n3- Para sair do programa\n\n");
    scanf ("%d", &K);
    
    if (K == 1)
    {
    system ("cls");
    
    
    int b,c,d,e,f,g;
    int h,k,l,j,m,n;
    int i,x,cont=0;
    int a[6] = {b,c,d,e,f,g};
    int A[6] = {h,k,l,j,m,n};
    
    for (i=0; i<=5; i++)
    {
        DE_NOVO:
        printf ("\nDigite %d\xF8 numero: ", i+1);
        scanf("%d", & a[i]);
        if ( a[i] <= 0 || a[i]>60)
        goto DE_NOVO;
    }
    system ("cls");
    srand (time (NULL));
    
    printf ("\nAguarde um instante enquanto o programa faz o sorteio...");
    
    for (i=0; i<=5; i++)
    {
    A[i]= rand ()%59+1;
    sleep(1500);
    }
    printf ("\n\nSeus n\xA3meros foram: (%d) (%d) (%d) (%d) (%d) (%d)", a[0],a[1],a[2],a[3],a[4],a[5]);
    printf ("\n\nOs n\xA3meros sorteados foram: (%d) (%d) (%d) (%d) (%d) (%d)", A[0],A[1],A[2],A[3],A[4],A[5]);
   
    for (x=0; x<=5; x++)
    {
    for (i=0; i<=5; i++)
    {
    if (a[x] == A [i])
    cont++;
    }
    }
    
    if (cont==1 || cont == 0)
    printf("\n\nVoc\x88 acertou %d n\xA3mero !!!", cont);
    else
    printf("\n\nVoc\x88 acertou %d n\xA3meros !!!", cont);
    printf("\n\n\nDigte 'R' para retornar ao in%ccio\n ", 161);
    printf("\n\nDigite 'S' para sair do programa\n");
    esc = getch();
    
    if (esc == 'R' || esc == 'r') 
    {
    system ("cls");
    goto REINICIO;
    }
    
    if (esc = 'S' || esc == 's') system ("exit");
    
    }
    if (K == 2)
    {
    int a,b=0,c=0,d=0,e=0,f=0,i;
     
     printf("Bem-Vindo ao SIMULADOR DE URNA ELETR\x99NICA");
     printf("\nOs candidatos a Prefeitura de Salvador\n");
     printf("\n\nNelson Pelegrino - 13\n");
     printf("\nM\xA0rio Kert\x82sz - 15\n");
     printf("\nAcm Neto - 25\n");
     printf("\n\nPressione ENTER P/ Continuar");
     getch ();
     
     for (i=1; i != 9650; i=a)
     {
     system ("cls");
     printf("\n\nPara votar Branco - 0\n");
     printf("\n\nNelson Pelegrino - 13\n");
     printf("\nM\xA0rio Kert\x82sz - 15\n");
     printf("\nAcm Neto - 25\n");
     REPITA:
     printf("\nDigite o seu voto - "); 
     scanf ("%d", &a);
    
     if (a==13)
     {
     b++;
     printf("\nVoto Computado com Sucesso");
     sleep (1500);
     }
     if (a==15)
     {
     c++;
     printf("\nVoto Computado com Sucesso");
     sleep (1500);
     }
     if (a==25)
     {
     d++;
     printf("\nVoto Computado com Sucesso");
     sleep (1500);
     }
         
     if (a==0)
     {
     e++;
     printf("\nVoto Computado com Sucesso");
     sleep (1500);
     }
         
     if (a != 13 && a != 15 && a != 25 && a!= 0 && a != 9650)
     {
     f++;
     printf("Voto Computado");
     sleep (1500);
     }
     
     i=a;
     }  
     
     system("cls");
     printf("\nO RESULTADO DA ELEI\x80\x8EO FOI\n");
     printf("\nNelson Pinheiro - %2d Votos\n", b);
     printf("\nM\xA0rio Kert\x82sz - %2d Votos\n", c);
     printf("\nACM Neto - %2d Votos\n", d);
     printf("\nVotos Brancos - %2d Votos",e);
     printf("\nVotos Nulos - %2d Votos",f);
     printf("\n\n\nDigte 'R' para retornar ao in%ccio\n ", 161);
     printf("\n\nDigite 'S' para sair do programa\n");
     esc = getch();
     
     if (esc == 'R' || esc == 'r') 
     {
     system ("cls");
     goto REINICIO;
     }
    
     if (esc = 'S' || esc == 's') system ("exit");
    } 
    
    if (K == 3)
    {
    system ("cls");
    printf ("Muito obrigado por utilizar o programa!!!! ");
    sleep (1500);
    printf ("bye ");
    sleep  (1500);
    system ("exit");
    }
    
    else 
    {
    goto REINICIO;
    }
}
