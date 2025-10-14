//sum of digits
#include<stdio.h>
int main(){
    int no,r,count=0,sum=0,m=1;
    printf("Enter no:");
    scanf("%d",&no); 
    //no == 361 
    while(no>0){ //361>0 36>0 3>0 0>0
        r=no%10; //361%10 = 1 36%10 = 6 3%10 =3
        no = no/10; //361/10=36 36/10=3.6=3 3/10=0
        count++; //1 2 3
        sum = sum+r;
        m = m*r;
    }
    printf("\n No of digits are %d",count);
    printf("\n Sum of digits are %d",sum);
    printf("\n Product of digits are %d",m);
}