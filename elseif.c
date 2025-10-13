#include<stdio.h>
int main(){
    int a;
    printf("\n Enter a:");
    scanf("%d",&a);
    if(a>0){
        printf("A is +ve");
    } else if(a<0){
        printf("A is -ve");
    } else {
        printf("A is zero");
    }
}