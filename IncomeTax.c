#include<stdio.h>

int main(){
    
    int inc,tax;
    printf("Enter the annual income of the employee: \n");
    scanf("%d",&inc);
    if(inc<250000){
        printf("No tax");
    }
    else if(inc>=250000 && inc<500000){
        printf("The tax amount is: %d",inc*5/100);
    }
    else if(inc>=500000 && inc<1000000){
        printf("The tax amount is: %d",inc*20/100);
    }
    else{
        printf("The tax amount is: %d",inc*30/100);
    }
    return 0;
}
