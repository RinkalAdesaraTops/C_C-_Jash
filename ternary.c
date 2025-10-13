#include<stdio.h>
int main(){
    int age,no,a,b;
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter no:");
    scanf("%d",&no);
    //()?true block: false block
    printf((age>=18)?"Eligible for vote":"Not eligible for vote");
    printf((no%2==0)?"\n It is even no":"\n It is odd no");
    printf((a>b)?"\n A is maximum":"B is maximum");
}