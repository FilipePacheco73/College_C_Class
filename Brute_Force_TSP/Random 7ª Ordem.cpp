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
int a[8],b,d,c,i,j,k,x,cont=0;
float p;
a[0]=0;
a[1]=0;
a[2]=0;
a[3]=0;
a[4]=0;
a[5]=0;
a[7]=0;
j=0;
int matriz[8][720];
for (j=0;j<720;j++)
{
matriz[0][j]=1; 
matriz[7][j]=1;
}
srand(time(NULL));
for(j=0;j<720;j++)
{
ala:
for(i=1;i<7;i++)
{
	inicio:	
	cont=cont+1;
	a[i] = 2 + ( rand() % 6 );

	if( a[i] != a[i-1] && a[i] != a[i-2] && a[i] != a[i-3] && a[i] != a[i-4] && a[i] != a[i-5] && a[i] != a[i-6])	
	{
			matriz[i][j]=a[i];
	}
	else
	{
  	goto inicio;
	}
}
for(k=1;k<720;k++)
{
if (matriz[0][j] == matriz [0][j-k] && matriz[1][j] == matriz [1][j-k] && matriz[2][j] == matriz [2][j-k] && matriz[3][j] == matriz [3][j-k] && matriz[4][j] == matriz [4][j-k] && matriz[5][j] == matriz [5][j-k] && matriz[6][j] == matriz [6][j-k])
{
	goto ala;
}
}
p=(j*100)/720;
system("cls");
printf("A porcentagem eh %f %",p);
}
/*
for (i=0;i<8;i++)
{
printf("\n");
for (j=0;j<720;j++)
{
printf("%d ", matriz[i][j]);
}
}
system("cls");
*/
tf = clock();
tempo_gasto = ( (double) (tf - t0) )/1000;
printf("Tempo gasto: %.3lf segundos", tempo_gasto);
printf("\n\nVezes %d", cont);
printf("\n\n\n\n");
system("pause");
}
