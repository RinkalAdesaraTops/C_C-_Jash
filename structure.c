#include<stdio.h>
struct emp{
    int emp_id,salary;
    char emp_name[50];
}e2,e3;
int main(){
    struct emp e1;
    printf("\n Enter emp id:");
    scanf("%d",&e1.emp_id);
    printf("\n Enter emp salary:");
    scanf("%d",&e1.salary);
    printf("\n ENter employee name:");
    fflush(stdin);
    gets(e1.emp_name);
    printf("\n Emp ID \t Emp Name \t Salary");
    printf("\n%d \t %s \t %d",e1.emp_id,e1.emp_name,e1.salary);
}
// array of structure