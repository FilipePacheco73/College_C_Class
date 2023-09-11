#include <conio.h>
#include<windows.h>

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
    int i,r;
    gotoxy(41,16);
    printf("Print na Tela na posição 41,16");
            
    getch();
}
