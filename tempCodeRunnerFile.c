#include <stdio.h>
int main()
{
    int a=5;
    int b=++a;
    int c=b++;
    printf("the value of b is %d\n",b);
    printf("the value of c is %d\n",c);
    printf("sum of a and b is %d\n",a+b);
    printf("sum of a,b and c is %d\n",a+b-c);
    printf("sum of a and c is %d\n",a/c);
    printf("sum of b and c is %d\n",b-c);
    printf("sum of a,b and c is %d\n",a*b*c);
    printf("sum of numbers is %d\n",c*a*b);
    return 0;
}