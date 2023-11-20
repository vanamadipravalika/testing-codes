#include <stdio.h>
int main()
{
    int smarks[10] = {25, 36, 78, 45, 22, 66, 88, 77, 12, 56};
    int i, pass, fail, arr;
    for (int i = 0; i < 10; i++)
    {
         if (smarks[i] >= 35)
            {
                printf("pass smarks : %d\n", smarks[i]);
            }
            else 
                printf("fail smarks : %d\n", smarks[i]);
    }
      
}