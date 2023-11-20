#include <stdio.h>
int main()
{
    int a=85.22;
    int b=98.33;
    int c=87;
    int d=69;
    printf("enter the a and b values is : %d\n",a&b);
    printf("enter the c and d values is : %d\n",c|d);
    printf("enter the b and a values is : %d\n",b<<a);
    printf("enter the d and c values is : %d\n",d>>c);
    printf("enter the a and b values is : %d\n",a=~b);
    printf("enter the c and d values is : %d\n",c^d);
    return 0;
}