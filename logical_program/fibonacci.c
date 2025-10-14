#include<stdio.h>
int main(){
    int i=1,f=0,s=1,t;
    while(i<=10){
        printf("%d\n",f);
        t=f+s;
        f=s;
        s=t;
        i++;
    }
}