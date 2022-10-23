#include <stdio.h>
#include<conio.h>

void main()
{  char ans;
   clrscr();
   printf("HELLO WORLD \n");
   printf("Do You Want a Suprise? (Y- yes or N- no) \n");
      scanf("%c", &ans);
   
   if (ans=='Y')
   {
      printf("HAPPY DIWALI! Stay Safe! \n");
}
   else
      printf("Okay! Bye! \n");
   getch();
}
