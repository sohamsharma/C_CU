#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
int main(void)
{
   int gdriver = DETECT, gmode, errorcode;
   int i,j;
   initgraph(&gdriver, &gmode,"C:\\TurboC3\\BGI");
   for(j=1;j<2;j++)
   {
   for(i=1;i<=30;i++)
   {
   circle(300,200,i);
   setcolor(i);
   delay(100);
   }
   circle(300,200,30);
   setcolor(0);
   for(i=30;i>=1;i--)
   {
   circle(300,200,i);
   setcolor(0);
   delay(100);
   }
   }
   getch();
   closegraph();
   return 0;
}
