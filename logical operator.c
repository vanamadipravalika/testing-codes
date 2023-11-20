#include <stdio.h>
int main()
{
    int a,b,c,d;
    a=10;
    b=20;
    c=20;
    d=10; 
    printf("\n %d",(c==b)&&(b>=c));
    printf("\n %d",(a<=d)||(a<b));
    printf("\n %d",(b>=a)!=(c+a));
    printf("\n %d",(c<a)&&(a>b));
    printf("\n %d",(a==b)||(c!=a));
    return 0;
}
