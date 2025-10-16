//sum of elements
#include <stdio.h>
int main()
{
    // [23,34,12,56,32]
    int n,i;
    printf("\n ENter size of array:");
    scanf("%d",&n); //5
    int a[n];
    printf("\n Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nYou have entered below elements--");
    for(i=0;i<n;i++){
        // sum += a[i];
        printf("%d\n ",a[i]);
    }
}