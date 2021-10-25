//Input a number and chech if it is armstrong or not.
#include <stdio.h>
void main()
{
    int a, sum = 0, b;

    printf("\nEnter a number to chech  if it is armstrong : ");
    scanf("%d", &a);
    int c = a;
    while (c > 0)
    {
        b = c % 10;
        sum = sum + (b * b * b);

        c = c / 10;
    }
    if (sum == a)
        printf("%d is an armstrong number", a);
    else
        printf("%d is not an armstrong number", a);
}