#include <stdio.h>
int main()
{
    int i, j, temp;
    int num[] = {2, 4, 64, 25, 23, 62, 66, 24, 1, 45};
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (num[j] > num[i])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("The sorted array is :");
    for (int k = 0; k < 10; k++)
    {
        printf("%d ", num[k]);
    }
}