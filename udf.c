#include <stdio.h>
//1) TNRN- take nothing return nothing 
void add() //initialize
{
    int a=10,b=20;
    printf("\n Addition is %d",(a+b));
}
//2)TSRN - take something return nothing
void area(float r){
    const float pi=3.14;
    float ans = pi*r*r;
    printf("\n Area of circle is %.2f",ans);
}
//3)TNRS - take nothing return something
int mult(){
    int a=25,b=5;
    return a*b;
}
//4)TSRS - take something return something
int cube(int a){
    return a*a*a;
}
int main()
{
    //function calling
    add();
    float p;
    int ans;
    printf("Enter radious:");
    scanf("%f",&p); 
    // area(2.5);
    area(p);
    ans = mult();
    printf("\n Multiplication is %d",ans);
    printf("\n Cube is %d",cube(4));

    // printf("\n Multiplication is %d",mult());
}
// void add(){ //definition - coding or logic
// }