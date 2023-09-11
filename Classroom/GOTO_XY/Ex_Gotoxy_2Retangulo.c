#include <stdio.h>
#include <stdlib.h>
#include<dos.h>
#include <conio.h>
#include<windows.h>
// Exemplo do Gotoxy - Desnha 02 Retangulos na Tela 
void gotoxy( char x, char y ) 
{ 
 HANDLE hConsoleOutput; 

 COORD dwCursorPosition; 
 dwCursorPosition.X = x; 
 dwCursorPosition.Y = y; 
 hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE); 
 SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition); 
}; 
int main()
{

      int i,r,c1=5,c2=28,c3=27,c4=58;
//  Desenha Colunas
    for(i = c1; i < c2; i++)
    {
        gotoxy(c3,i);
        printf("%c",0xBA);
        gotoxy(c4,i);
        printf("%c",0xBA);
        sleep(10);
        
    }
//  Desenha Linhas Superior  
    for(i = c3; i < c4; i++)
    {
        gotoxy(i,c2);
        printf("%c",0xCD);

        gotoxy(i,c1);
        printf("%c",0xCD);
        sleep(10);
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
    
// Novo Ciclo    
c1=c1-2;c2=c2+2;c3=c3-2;c4=c4+2;
    for(i = c1; i < c2; i++)
    {
        gotoxy(c3,i);
        printf("%c",0xBA);
        gotoxy(c4,i);
        printf("%c",0xBA);
        sleep(10);
    }
//  Desenha Linhas Superior  
    for(i = c3; i < c4; i++)
    {
        gotoxy(i,c2);
        printf("%c",0xCD);

        gotoxy(i,c1);
        printf("%c",0xCD);
        sleep(10);
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
    
    gotoxy(41,16);
    printf("F T C");
    gotoxy(1,1);
    getch();
}
