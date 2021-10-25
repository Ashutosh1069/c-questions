#include <stdio.h>
void dectoBin(int n)
{
    if(n==0)
    printf("%d",0);
    else
    {
        while(n>0)
        {
            
            printf("%d",n/2);
            n=n/2;
        }

    }

}

int main() 
{
    int  num;
    printf("\n Enter the Number you want change");
    scanf("%d",&num);
    dectoBin(num);
 return 0;
}

    


