#include <stdio.h>
int main()
{
    int a, *ptr;
    a = 10;
    ptr = &a; // ptr = 1001
    printf("\n A is %d", a);
    printf("\n Address is %p", ptr);
    printf("\n Value is %d", *ptr);
    *ptr = 25;
    printf("\n A is %d", a);
    printf("\n Value is %d", *ptr);
    printf("\n Address is %p", ptr);
}