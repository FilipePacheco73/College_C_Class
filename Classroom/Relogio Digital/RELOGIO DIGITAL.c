#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main ()
{
    int k;
    printf("Faca a escolha");
    scanf("%d", &k);
    
    if (k == 1)
    {
    int h,m,s,h1,m1,s1,d,i,a; 
    
    printf("Digite o horario de alarme\n");
    printf("Digite a hora [0-23]h : ");
    scanf ("%d", &h1); 
    printf("Digite o minuto [0-59]h : ");
    scanf ("%d", &m1);
    printf("Digite o segundo [0-59]h : ");
    scanf ("%d", &s1);
    
    for (a=2012; a<9999; a++)
    {   
    for (i=1; i<=12; i++)
    {   
    for (d=1; d<=30; d++)
    {   printf ("\n\n%02d/%02d/%d\n",d,i,a); 
    for (h=0; h<=23; h++)
    {   
    for (m=0; m<=59; m++)
    {
    for (s=0; s<=59; s++)
    {
       
        printf("\n%02d:%02d:%02d",h,m,s);
        _sleep(1); 
        if (h == h1 && m == m1 && s == s1) 
        {
             system("\a");
             system("cls");
             printf("\n %02d/%02d/%d - %02d:%02d:%02d\n",h,m,s,d,i,a);
             system("PAUSE");     
              
        }
    }
    }
    }
    }
    }
    }
    getch(); 
    }   
    if (k == 2)
    {
    
    }
}
