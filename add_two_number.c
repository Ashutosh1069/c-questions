#include <stdio.h>
int main() {    

    int number1, number2, number3, sum;
    
    printf("Enter first number: \n");
    scanf("%d", &number1);
    
    printf("Enter second number: \n");
    scanf("%d", &number2);
    
    printf("Enter third number: \n");
    scanf("%d", &number3);

    // calculating sum
    sum = number1 + number2 + number3;      
    
    printf("%d + %d +%d = %d", number1, number2, number3, sum);
    
    printf("Maths is Fun!");
    printf("Naah! Just Kidding");
    
    return 0;
}
