//writing into file
#include<stdio.h>
int main(){
    FILE* f1;
    FILE* f2;
    f1 = fopen("firstfile.txt","r");
    f2 = fopen("testfile.txt","w");
    int id,sal;
    char str[50];
    fscanf(f1,"%s %d %d",str,&id,&sal);
    printf("String from file is %s ",str);
    printf("\n Id is %d ",id);
    printf("\n Salary is %d ",sal);
    fprintf(f2,"%s %d %d",str,id,sal);
    fclose(f1);
}