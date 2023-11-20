/* c programming
Float Data Type
In C programming float data type is used to store floating-point values. Float in C is used to store decimal and exponential values. It is used to store decimal numbers (numbers with floating point values) with single precision.

Range: 1.2E-38 to 3.4E+38
Size: 4 bytes
Format Specifier: %f
Syntax of float
The float keyword is used to declare the variable as a floating point.*/
#include <stdio.h>
int main()
{
    float a,b,c;
    a=20.6;
    b=30.8;
    c=15.9;
    printf("1.addition:%f\n",a+b+c);//
    printf("2.multiplication:%f\n",a*b*c);
    printf("3.division:%f\n",a/b);
    printf("4.subtraction:%f\n",a-b-c);
    return 0;
}