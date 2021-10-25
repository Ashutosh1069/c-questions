#include<stdio.h>

int main(){
    int a, x=0, y=1, z;
    printf("Enter the limit : ");
    scanf("%d", &a);

    for (int  i = 0; i <= a; i++)
    {
        printf("%d\n",x);

        z=x+y;
        x=y;
        y=z;
        printf("\n%d", x);

    }
    printf("The %d term of fibonacci series is %d",a,x);
    
}