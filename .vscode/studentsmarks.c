#include <stdio.h>
int main()
{
    int studentsmarks[] = {89, 91, 78, 30, 84, 65};
    studentsmarks[3]=99;
    printf("students telugu marks is : %d\n", studentsmarks[0]);
    printf("students english marks is : %d\n", studentsmarks[1]);
    printf("students social marks is : %d\n", studentsmarks[3]);
    printf("students hindi marks is : %d\n", studentsmarks[2]);
    printf("students science marks is : %d\n", studentsmarks[4]);
    printf("students maths marks is : %d\n", studentsmarks[5]);
    return 0;
}

