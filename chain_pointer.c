#include <stdio.h>
int main()
{
    int a, *p1,**p2,***p3,****p4;
    a=100;
    p1 = &a;
    p2 = &p1;
    p3 = &p2;
    p4 = &p3;
    printf("\n A is %d",a);
    printf("\n p1 is %d",*p1);
    printf("\n p2 is %d",**p2);
    printf("\n p3 is %d",***p3);
    printf("\n p4 is %d",****p4);
    **p2 = 250;
    printf("\n After update--------------");
    printf("\n A is %d",a);
    printf("\n p1 is %d",*p1);
    printf("\n p2 is %d",**p2);
    printf("\n p3 is %d",***p3);
    printf("\n p4 is %d",****p4);
}
// swapping program using pointer
//a , b 