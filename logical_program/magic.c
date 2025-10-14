//1729
//sum of digits = 1+7+2+9 = 19
//reverse = 91
//multiply = sum*rev = 19*91 = 1729
#include<stdio.h>
int main(){
    int no,r,rev=0,sum=0,mult,f,t;
    printf("Enter no:");
    scanf("%d",&no);
    t=no;
    while(no>0){
        r = no%10;
        no = no/10;
        sum = sum+r;
    }
    printf("\n Sum of digits are %d",sum);
    f=sum;
    while(sum>0){
        r = sum%10;
        rev = (rev*10) + r;
        sum = sum/10;
    }
    printf("\n Reverse is %d",rev);
    mult = f*rev;
    printf("FInal answer is %d",mult);
    if(t==mult){
        printf("\n It is magic no");
    } else {
        printf("\n It is not magic no");

    }
}
