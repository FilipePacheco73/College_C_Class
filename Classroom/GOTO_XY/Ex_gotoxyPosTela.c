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
    printf("41,16");
    
    gotoxy(1,1);
    printf("1,1");
    
    gotoxy(75,1);
    printf("75,1");
    
    gotoxy(75,20);
    printf("75,20");
    
    gotoxy(1,20);
    printf("1,20");
    
    
    gotoxy(1,24);
    printf("1,24");
    
    getch();
}
