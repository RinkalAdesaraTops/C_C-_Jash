//writing into file
#include<stdio.h>
int main(){
    FILE* f1;
    f1 = fopen("firstfile.txt","w");
    fprintf(f1,"Hello");
    fclose(f1);
}