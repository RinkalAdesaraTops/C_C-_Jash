#include<stdio.h>
int main(){
    int m,n,i,j,sum=0;
    printf("Enter row & column size:");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("\n Enter elements of array:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n Matrix :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }
    printf("\n Sum of all elements are %d",sum);
}