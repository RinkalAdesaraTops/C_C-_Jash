#include<stdio.h>
int main(){
    int a[5] = {11,22,33,44,55};
    int *p;
    p = &a[0];
    for(int i=0;i<5;i++){
        printf("%d\n",*p);
        p++;
    }
}