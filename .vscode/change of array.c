#include <stdio.h>
int main()
{
    int mynumbers[]={25,88,68,89,100,300,589,456};
    mynumbers[4] =98;
    printf("%d\n", mynumbers[4]);
    printf("%d\n", mynumbers[2]);
    printf("%d\n", mynumbers[6]);
    return 0;
}