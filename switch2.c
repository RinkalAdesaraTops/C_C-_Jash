#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("\n Enter a,b");
    scanf("%d %d",&a,&b);
    printf("\n 1.Addition");
    printf("\n 2.Minus");
    printf("\n 3.Division");
    printf("\n 4.Multiplication");
    printf("\n Enter your choice");
    fflush(stdin);
    scanf("%c",&ch); //7
    switch(ch){
        case '+': printf("\n Addition is %d",(a+b));
                break;
        case '-': printf("\n Minus is %d",(a-b));
                break;
        case '/': printf("\n Division is %f",(float)(a/b));
                break;
        case '*': printf("\n Multiplication is %d",(a*b));
                break;
        default:printf("\n Invalid choice...");
                break;
    }

}