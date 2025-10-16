//sum of elements
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("\n ENter size of array:");
    scanf("%d",&n); 
    int a[n],rev[n]; 
    printf("\n Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("\nYou have entered below elements--\n");
    for(i=0;i<n;i++){
        printf("%d\n ",a[i]);
    }
    for(i=n-1,j=0;i>=0;i--,j++){
        rev[j] = a[i];
    }
    printf("\nReverse Array --\n");
    for(i=0;i<n;i++){
        printf("%d\n ",rev[i]);
    }
}