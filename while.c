#include <stdio.h>
int main()
{
    int i = 1; // entry controlled loop
    while (i <= 10)
    {
        printf("%d \n", i);
        i++; // i=i+1 i+=1
    }
    i = 20;
    while (i >= 10)
    {
        printf("%d \n", i);
        i--;
    }
}