#include<stdio.h>
void ref(int * x, int * y){
    int sum= *x+*y;
    int sub= *x-*y;
    *x= sum;
    *y=sub;


}
void main(){
    int a,b;
    printf("Enter the vaule of a and b : ");
    scanf("%d %d",&a,&b);
    ref(&a,&b);
    printf("value of a is : %d\n",a);
    printf("value of b is : %d",b);
    
}