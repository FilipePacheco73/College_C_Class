#include <stdio.h>
#include <stdlib.h>
#include<dos.h>
#include <conio.h>
#include<windows.h>
// Exemplo do Gotoxy - Desnha varios Retangulos na Tela 
void gotoxy( char x, char y ) 
{ 
 HANDLE hConsoleOutput; 

 COORD dwCursorPosition; 
 dwCursorPosition.X = x; 
 dwCursorPosition.Y = y; 
 hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE); 
 SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition); 
}; 

void tela (int c1,int c2,int c3,int c4)
{
//  Desenha Colunas
int i,r,t=11000000;
for(i = c1; i < c2; i++)
    {
        gotoxy(c3,i);
        printf("%c",0xBA);
        gotoxy(c4,i);
        printf("%c",0xBA);
        for(r = 1; r < t; r++);
    }
//  Desenha Linhas Superior  
    for(i = c3; i < c4; i++)
    {
        gotoxy(i,c2);
        printf("%c",0xCD);

        gotoxy(i,c1);
        printf("%c",0xCD);
        for(r = 1; r < t; r++);
    }    
//  Desenha Cantos Superiores
    gotoxy(c3,c2);
    printf("%c",0xC8);
    gotoxy(c4,c2);
    printf("%c",0xBC);
//  Desenha Cantos Inferiores
    gotoxy(c3,c1);
    printf("%c",0xC9);
    gotoxy(c4,c1);
    printf("%c",0xBB);
}
     
int main()
{
      tela(3,30,25,60);  
      tela(5,28,27,58);  
      tela(7,26,29,56);  
      tela(9,24,31,54);
      tela(11,22,33,52);
      tela(13,20,35,50);
      tela(15,18,37,48); 
      
      gotoxy(41,17);
      printf("F T C");
      gotoxy(1,1); 
    
      getch();  
    

}
