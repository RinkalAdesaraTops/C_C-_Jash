#include<stdio.h>
// Arithmetic operators - +,-,*,/,%(modulus)
int main(){
    //run time - dynamic values
    //scanf()
    int a,b,c;
    printf("Enter value of a:"); //output
    scanf("%i",&a); //address //input 20
    printf("Enter value of b:");
    scanf("%i",&b); //address //5
    c=a+b;
    printf("\n Addition is %d",c);
    c=a-b;
    printf("\n Minus is %d",c);
    c=a*b;
    printf("\n Multiplication is %d",c);
    float d = (float)a / b;
    printf("\n Division is %f", d);
}