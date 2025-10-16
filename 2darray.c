#include<stdio.h>
int main(){
    // int a[3][2] = {11,22,33,44,55,66};
    int a[3][2] = {{11,22},{33,44},{55,66}};
    for(int i=0;i<3;i++){ //i=0
        for(int j=0;j<2;j++){ //j=0 j=1
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    // printf("\n %d",a[0][0]);
    // printf("\n %d",a[1][1]);
    /*0  1
    0 11 22
    1 33 44
    2 55 66
    */
    
}