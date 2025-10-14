// 121 == 121 - palindrom number
//reverse no
#include<stdio.h>
int main(){
    int no,r,rev=0,f;
    printf("Enter no:");
    scanf("%d",&no);
    f=no; 
    //no=542 == 2 4 5
    while(no>0){ //54>0 no=0
        r=no%10; //542%10 = 2 54%10 =4 5
        rev = (rev*10)+r; //0*10 +2 = 2 2*10 + 4 = 24 24*10+5 = 245
        no = no/10; //542/10 = 54 54/10 =5
    }
    printf("\n Reverse is %d",rev);
    if(f == rev){
        printf("\n It is palindrom no");
    } else {
        printf("\n It is not palindrom no");

    }
   
}