#include<stdio.h>
int main(){
    int a,b,temp;
    printf("\n Enter 2 values:");
    scanf("%d %d", &a, &b);
    temp =a;
    a=b;
    b=temp;
    printf("\n After swapping A=%d and b=%d",a,b);   
}