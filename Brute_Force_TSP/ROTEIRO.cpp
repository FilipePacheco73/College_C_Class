#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>

int main()
{
	int i,j,k,x,n,total;
	char A[10],B[10];
	total=1;
		
	inicio:
	printf("Informe quantas Cidades existem ");	
	scanf("%d", & n);
	system("cls");
	
		if (n<4)
	{
	printf("\n\nNumero de cidades insuficientes, por favor informe novamente outro valor");
	_sleep(2500);
	system("cls");
	goto inicio;
	} 
	
	for (i=n-1;i>1;i--)
	{
	total=total*i;	
	}
	int matriz [n][total];
	
		printf("O valot total eh %d \n\n",total);
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
	printf("%3.d  ", m1[i][j]);
	}
	}
	printf("\n\n\n");	
system("pause");	
}
