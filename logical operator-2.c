/* c programing for float
Float Data Type
In C programming float data type is used to store floating-point values. Float in C is used to store decimal and exponential values. It is used to store decimal numbers (numbers with floating point values) with single precision.

Range: 1.2E-38 to 3.4E+38
Size: 4 bytes
Format Specifier: %f
Syntax of float
The float keyword is used to declare the variable as a floating point*/
#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter the two variables values a,b :\n");
    scanf("%f%f",&a,&b);
    printf("enter the two variables values c,d :\n");
    scanf("%f%f",&c,&d);
    /*In the given below statement  
    it returns true when both a&&b are true or 1.*/
    printf("the sum of a and b is %f\n",(a&&b));
    /* In the given below statement
    it returns true when either b||c is true or 1.*/
    printf("the sum of b and c is %f\n",b||c);
    /*In the given below statement
    it is used to reverse the logical state of the c!a*/
    printf("the sum of c and a is %f\n",c!=a);
    return 0;

}