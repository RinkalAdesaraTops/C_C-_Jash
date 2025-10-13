#include <stdio.h>
int main()
{
    int a = 10, b;
    // ++ --
    printf("\n a is %d", a);
    b = a++; // a=11 postfix +1
    printf("\n a is %d", a);
    printf("\n b is %d", b); //10

    b = ++a; // a=12 prefix +1 
    printf("\n a is %d", a);
    printf("\n b is %d", b);
}