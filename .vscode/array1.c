#include <stdio.h>
int main()
{
    int r, c;
    int num[2][3] = {{10, 20,30},{40,50, 60}};
    printf("array elements are\n");
    for (r = 0; r<2; r++){   // rows
        for (c = 0; c<3; c++) // colons
        {
            printf("%d\t", num[r][c]);
        }
        printf("\n");
    }
    return 0;
}