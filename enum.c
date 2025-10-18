#include <stdio.h>
enum weekdays
{
    sunday, //0
    monday, //1
    tuesday=50,
    wednesday,
    thursday,
    friday,
    saturday
};
int main()
{
    enum weekdays e1 = friday;
    printf("%d",e1);
}