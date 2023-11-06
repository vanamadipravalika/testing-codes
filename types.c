// c programe to global variable
#include <stdio.h>
//global variable declaration:
int g;
int main()
{
    //local variable declaration:
    int a,b;
    //actual initialization
    a=10;
    b=28;
    g=a+b;
    printf("sum of a and b is %d\n",a+b);
    printf("sum of b and a is %d\n",b*a);
    return 0;
}
