#include <stdio.h>
#include <stdlib.h>
#include<dos.h>
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
    unsigned char byte;
    int n=0,t,j,i,a=1,x=40,y=1;
     
    do
    {
     gotoxy(x,y);
     for(j = x; j < x + a; j++)
        printf("FTC ");
     x = x - 4;
     y = y + 2; 
     a = a + 2;
     for(t = 13; t < 91000000; t++);
//     if (x == 80) x = 36;
     if (y > 15) 
       { x = 40 + n;
         y = 1;
         a=1;
         n++;
         system("cls"); 
     }          //sleep(1000);
    
    
    } while (!kbhit());// Executa enquanto não tecla nenhuma tecla
      system("PAUSE");
      return 0;
}

