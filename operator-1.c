#include <stdio.h>
int main()
{
    int a,b,c;
    a=45;
    b=65;
    c=35;
    printf("step-1:%d\n",a+b+c);
    printf("step-2:%d\n",a+b-c);
    printf("step-3:%d\n",a-b*c);
    printf("step-4:%d\n",c-b+a);
    printf("step-5:%d\n",b*c+a);
    printf("step-6:%d\n",c&b*a);
    printf("step-7:%d\n",a&b&c);
    printf("step-8:%d\n",a*b%c);
    return 0;
}