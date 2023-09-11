#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h>
#include <conio.h>
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
int main (int argc,char *argv[]) 
{ 
do
{
  backcolor(BLUE);
  system("cls");  
  textcolor(YELLOW); 
  printf("Cor de  fundo azul e cor  de  texto amarelo\n"); 
  _sleep(2000); 

  backcolor(WHITE); 
  system("cls");
  textcolor(BLUE);
  printf("Cor de  fundo branco e texto em azul\n"); 
  _sleep(2000); 
 
  backcolor(YELLOW); 
// system("cls");
  textcolor(LIGHT_RED);
  printf("Destaque somente no texto \n");
  printf("Cor de fundo amarelo e texto Vermelho\n"); 
  _sleep(2000); 


  backcolor(YELLOW); 
  system("cls"); 
  textcolor(BLUE); 
  printf("Texto em azul e a cor de fundo em amarelo\n"); 
  _sleep(2000);
 } while (!kbhit());
}
