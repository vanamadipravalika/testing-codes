#include <stdio.h>
int main()
{
    int a,b,c,d;
    a=52; b=65; c=89; d=75;
    printf("sum of all numbers is: %d\n",a+b+c+d);
    printf("sum of all numbers is: %d\n",b+d+c+a);
    printf("sum of all numbers is: %d\n",c+d+a+b);
    printf("sum of all numbers is: %d\n",d+a+b+c);
    return 0;
} 