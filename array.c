#include <stdio.h>
int main()
{
    //static array - elements , size 
    // collection of data with same datatype
    int a[5] = {10, 20, 30, 40, 50}, i; // elements of array
    // printf("\n %d",a[0]);
    // printf("\n %d",a[1]);
    // printf("\n %d",a[3]);
    for (i = 0; i < 5; i++)
    {
        printf("\n %d", a[i]);
    }
}