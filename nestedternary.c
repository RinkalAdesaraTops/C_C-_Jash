#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\n Enter 3 values:");
    scanf("%d %d %d", &a, &b, &c);
    printf((a > b) ? (a > c) ? "\n A is amximum" : "C is maximum" : (b > c) ? "\n B is maximum"
                                                                            : "C is maximum");
    if (a > b)
    {
        if (a > c)
        {
            printf("\n A is max");
        }
        else
        {
            printf("\n C is max");
        }
    }
    else
    {
        if (b > c)
        {
            printf("\n B is max");
        }
        else
        {
            printf("\n C is max");
        }
    }

   
}