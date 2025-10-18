#include <stdio.h>
struct student
{
    int roll_no, m1, m2, m3;
    char name[50];
} s1[10];
int main()
{
    int n, i;
    printf("\n How many students are there?");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("ENter rollno of student %d --", (i + 1));
        scanf("%d", &s1[i].roll_no);
        printf("ENter m1,m2,m3 student %d---", (i + 1));
        scanf("%d %d %d", &s1[i].m1, &s1[i].m2, &s1[i].m3);
        printf("ENter Name of student %d--", (i + 1));
        fflush(stdin);
        gets(s1[i].name);
    }

    printf("\nRollNo Name \t Mark1 \t Mark2 \t Mark3\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t %s \t %d \t %d \t %d\n",s1[i].roll_no,s1[i].name,s1[i].m1,s1[i].m2,s1[i].m3);
    }
}
// 5 students