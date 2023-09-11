#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<time.h>

int main()
{
clock_t t0, tf;
double tempo_gasto;
t0 = clock();
int a[6],b,d,c,i,j,k,x,cont;
a[0]=0;
a[1]=0;
a[2]=0;
a[3]=0;
a[4]=0;
a[5]=0;
j=0;
int matriz[6][24];
for (j=0;j<24;j++)
{
matriz[0][j]=1; 
matriz[5][j]=1;
}
srand(time(NULL));
for(j=0;j<24;j++)
{
ala:	
for(i=1;i<5;i++)
{
	inicio:	
	a[i] = 2 + ( rand() % 4 );

	for(k=1;k<4;k++)
	{
	 if (a[i] == a[i-k])
	 {goto inicio;}
	 else
	 {matriz[i][j]=a[i];}
	}
}
for (k=1;k<24;k++)
{
cont=0;
for (i=0;i<6;i++)
{
	if(matriz[i][j] == matriz[i][j-k])
	{
		cont=cont +1;
	}
	if(cont == 6)
	{
	goto ala;
	}	
}
}
}
for (i=0;i<6;i++)
{
printf("\n");
for (j=0;j<24;j++)
{
printf("%d ", matriz[i][j]);
}
}
//system("cls");
tf = clock();
tempo_gasto = ( (double) (tf - t0) )/1000;
printf("\nTempo gasto: %.lf segundos", tempo_gasto);
printf("\n\n\n\n");
system("pause");
system("pause");
}
