#include <stdio.h>
#include <stdlib.h>
//#include<dos.h>
#include <conio.h>
#include<windows.h>
//#include <cstdlib>
//#include <iostream>

enum DOS_COLORS {
        BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN,
        LIGHT_GRAY, DARK_GRAY, LIGHT_BLUE, LIGHT_GREEN, LIGHT_CYAN,
        LIGHT_RED, LIGHT_MAGENTA, YELLOW, WHITE };
//---------------------------------------------------
void textcolor (DOS_COLORS iColor)
{
        HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
        BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
        bufferInfo.wAttributes &= 0x00F0;
        SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= iColor);
}
// -------------------------------------------------------------------------
void backcolor (DOS_COLORS iColor)
{  HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
   BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
   bufferInfo.wAttributes &= 0x000F;
   SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= (iColor << 4));
}

void gotoxy( char x, char y ) 
{ 
 HANDLE hConsoleOutput; 

 COORD dwCursorPosition; 
 dwCursorPosition.X = x; 
 dwCursorPosition.Y = y; 
 hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE); 
 SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition); 
} 

int main(int argc,char *argv[])
{
    unsigned char byte;
    int n=0,t,j,i,a=1,x=40,y=1;
     
    do
    {
     gotoxy(x,y);
     textcolor(BLUE);   
     backcolor(YELLOW);
     for(j = x; j < x + a; j++)
            printf("FTC "); 
//        printf("FTC %d %d ",x,y);
     x = x - 4;
     y = y + 2; 
     a = a + 2;
     if (x > 80) x = x - 40;
     if (n > 80) n = n - 40;
     if (y  > 15) 
       { x = 40 + n;
         y = 1;
         a=1;
         n++;
         backcolor(WHITE);
         system("cls"); 
       }
//       getch();  
     _sleep(5);
    } while (!kbhit());// Executa enquanto não tecla nenhuma tecla
      system("PAUSE");
}

