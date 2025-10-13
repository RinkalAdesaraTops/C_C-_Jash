#include<stdio.h>
int main(){
    //static - compile time
    int a=10;
    // ,b=25;
    int b=25;
    float pi=3.14;
    float r=2.5,area;
    // float ch;
    //format specifier %d %i
    /*
        int = %i,%d
        float = %f,
        char = %c,
        string = %s
    */
    printf("Addition is %d",(a+b));
    area = pi*r*r;
    printf("\n Area of circle is %.3f",area);
}