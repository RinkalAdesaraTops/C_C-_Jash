#include <stdio.h>
int main()
{
    int n,i,pos,e;
    printf("\n ENter size of array:");
    scanf("%d",&n); 
    int a[n]; 
    printf("\n Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }   
    printf("\nYou have entered below elements--\n");
    for(i=0;i<n;i++){
        printf("%d\n ",a[i]);
    }
    printf("\n Enter elements & position that you want to add this");
    scanf("%d %d",&pos,&e);
    // n=5
    n++;
}