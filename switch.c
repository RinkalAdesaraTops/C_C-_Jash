#include<stdio.h>
int main(){
    int a,b,ch;
    printf("\n Enter a,b");
    scanf("%d %d",&a,&b);
    printf("\n 1.Addition");
    printf("\n 2.Minus");
    printf("\n 3.Division");
    printf("\n 4.Multiplication");
    printf("\n Enter your choice");
    scanf("%d",&ch); //7
    switch(ch){
        case 1: printf("\n Addition is %d",(a+b));
                break;
        case 2: printf("\n Minus is %d",(a-b));
                break;
        case 3: printf("\n Division is %f",(float)(a/b));
                break;
        case 4: printf("\n Multiplication is %d",(a*b));
                break;
        default:printf("\n Invalid choice...");
                break;
    }

}