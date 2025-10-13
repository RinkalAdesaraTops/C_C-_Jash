// && || !
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    printf("\n a >b && a>c is %d",(a>b && a>c));
    printf("\n a>b || a>c is %d",(a>b || a>c));
    printf("\n a>b  is %d",(a>b)); //true
    printf("\n ! a>b  is %d",!(a>b)); //!true = false
}