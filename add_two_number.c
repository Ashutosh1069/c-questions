#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter first number: \n");
    scanf("%d", &number1);
    
    printf("Enter second number: \n");
    scanf("%d", &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    
    printf("Maths is Fun!");
    
    return 0;
}
