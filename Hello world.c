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
      printf("Stay Safe! We got your back! \n");
}
   else
      printf("Okay! Bye! Tata! \n");
   getch();
}
