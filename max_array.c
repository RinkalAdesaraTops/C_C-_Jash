//sum of elements
#include <stdio.h>
int main()
{
    int n,i,max;
    printf("\n ENter size of array:");
    scanf("%d",&n); //5
    int a[n]; 
    printf("\n Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max = a[0];
    printf("\nYou have entered below elements--");
    for(i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
        printf("%d\n ",a[i]);
    }
    printf("\n Maximum element is %d",max);
}