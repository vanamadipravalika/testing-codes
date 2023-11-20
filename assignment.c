#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b and c :\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("the sum of a and b is %d\n",a&b);
    printf("the sum of c and b is %d\n",c+=b);
    printf("the sum of c and a is %d\n",c-=a);
    printf("the sum of b and c is %d\n",b*=c);
    printf("the sum of a and c is %d\n",a%=c);
    printf("the sum of b,c and a is %d\n",b*=c%=a);
    printf("the sum of c,a and b is %d\n",c%=a+=b);
    return 0;
}