#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<time.h>

int main()
{
FILE *MATRIZ;
//MATRIZ = fopen("MATRIZ.xls","w");

int n,i,j=0,k,f,cont,total,A,B,C;
total=1;
float p;
	
ini:
	printf("Informe quantas Cidades existem ");	
	scanf("%d", & n);
	system("cls");
	
		if (n<3)
	{
	printf("\n\nNumero de cidades insuficientes, por favor informe novamente outro valor");
	_sleep(2500);
	system("cls");
	goto ini;
	} 
	
	for (i=n-1;i>1;i--)
	{
	total=total*i;	
	}
	int aux;
	aux= (n^2 - n)/2;
	int vetor [aux];
	int m1[n][n];
	
	for (i=0;i<n;i++)
	{
	for (j=0;j<n;j++)
	{
	if (i<j)
	{
	printf("Informe a distancia entre o Ponto %d e o Ponto %d: ", i+1,j+1);
	scanf("%d", & m1[i][j]);
	m1[j][i] = m1[i][j];
	}
	}
	m1[i][i]=0;
	}
	system("cls");
	
	for (j=0;j<n;j++)
	{
	printf("\n");
	for (i=0;i<n;i++)
	{
	printf("%3.d ", m1[i][j]);
	}
	}
	printf("\n\n");

clock_t t0, tf;
double tempo_gasto;
t0 = clock();
	
int matriz[n+2][total];
int a[n+1];
for(i=0;i<n+1;i++)
{
	a[i]=0;
}
for (j=0;j<total;j++)
{
	matriz[0][j]=j+1;
}
for (j=0;j<total;j++)
{
matriz[1][j]=1; 
matriz[n+1][j]=1;
}
srand(time(NULL));
f=n-1;
for(j=0;j<total;j++)
{
ala:	
for(i=1;i<n;i++)
{
	inicio:	
	a[i] =2+(rand()%f);

	for(k=1;k<n-1;k++)
	{
	 if (a[i] == a[i-k])
	 {goto inicio;}
	 else
	 {matriz[i+1][j]=a[i];}
	}
}
for (k=1;k<total;k++)
{
cont=0;
for (i=0;i<n+1;i++)
{
	if(matriz[i+1][j] == matriz[i+1][j-k])
	{
		cont=cont +1;
	}
	if(cont == n+1)
	{
	goto ala;
	}	
}
}
}

for (i=0;i<n+1;i++)
{
printf("\n");
//printf(MATRIZ,"\n");
for (j=0;j<total;j++)
{
printf("%d ", matriz[i+1][j]);
}
}
//fclose(MATRIZ);
/*tf = clock();
tempo_gasto = ( (double) (tf - t0) )/1000;
printf("\n\nTempo gasto: %.lf segundos", tempo_gasto);
getch();
*/

int matrizcalculo [n][total], SOMA[2][total];
for (j=0;j<total;j++)
{
SOMA[0][j]=matriz[0][j];
SOMA[1][j]=0;
for (i=0;i<n;i++)
{
A=matriz[i+1][j];
B=matriz[i+2][j];
matrizcalculo[i][j]=m1[A-1][B-1];
SOMA[1][j]=SOMA[1][j]+matrizcalculo[i][j];
}
}
printf("\n\n");
for (j=0;j<total;j++)
{
printf("%d ", SOMA[1][j]);
}

int menor[2][1];
menor[1][0]=100000000000000;
for(j=0;j<total;j++)
{
	if ( SOMA[1][j] <= menor[1][0])
	{
	menor[0][0]=SOMA[0][j];
	menor[1][0]=SOMA[1][j];
	}	
}
C=menor[0][0];
printf("\n\nO menor valor eh %d \n",menor[1][0] );
printf("\nA sequencia\n");
for(i=0;i<n+1;i++)
{
printf("\n%d",matriz[i+1][C]);
}
printf("\n");
system("pause");
}

