#include<stdio.h>
#include<string.h>
int main(){
    int ans;
    char ch,str[50],str2[50];
    // printf("Enter any character:");
    // scanf("%c",&ch);
    printf("\n Entered character: %c",ch);
    printf("\n Enter name:");
    fflush(stdin);
    gets(str); 
    printf("\n Enter name2:");
    fflush(stdin);
    gets(str2);   
    // scanf("%s",&str);
    // printf("\n Your name is : %s",str);
    printf("\n Your name is : ");
    puts(str);
    printf("\n Length is %d",strlen(str));
    // printf("\n Reverse string is %s",strrev(str));
    // strcpy(str2,str);
    // printf("\n Copy string is %s",str2);
    //strcat
    ans = strcmp(str,str2); //-1<,1 >,0=same
    printf("Comparision is %d",ans);
// gets() puts()
}