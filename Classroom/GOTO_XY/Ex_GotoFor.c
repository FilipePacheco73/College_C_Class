#include <conio.h>
#include<windows.h>
// Exemplo de Gotoxy e uso do For
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
    int i;
    for(i = 1; i < 20; i=i+2)
    {
     gotoxy(i,i);
     printf("Print na Tela na posicao (%d,%d)",i,i);
    }        
    getch();
}
