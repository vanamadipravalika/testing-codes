#include <stdio.h>
int main()
{
    int subjectrollnumber, marks;
    int num[2][7] = {{123, 456, 789, 963, 852, 741, 159}, {588, 489, 357, 520, 468, 599, 489}};
    printf("array elements are\n");
    for (subjectrollnumber = 0; subjectrollnumber < 2; subjectrollnumber++)
    {                                       // rows
        for (marks = 0; marks < 7; marks++) // colons
        {
            printf("%d\t", num[subjectrollnumber][marks]);
        }
        printf("\n");
    }
    return 0;
}