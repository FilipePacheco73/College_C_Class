#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<time.h>

int main()

{
int a,b,c,d,e,f;
c=10;
d=55000;
long int matriz[c][d];
e=0;
printf("test 1");
for(b=0;b<c;b++)
{
for(a=0;a<d;a++)
{
	e=e+1;
	matriz[b][a]=e;
	
}
}

for(b=0;b<c;b++)
{
for(a=0;a<d;a++)
{
	printf("%d ",matriz[b][a]);
	
}
}
getch();
}
