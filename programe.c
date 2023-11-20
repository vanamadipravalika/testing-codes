/* c programing
1.Float Data Type
In C programming float data type is used to store floating-point values.
Float in C is used to store decimal and exponential values. 
It is used to store decimal numbers (numbers with floating point values) with single precision.

Range: 1.2E-38 to 3.4E+38
Size: 4 bytes
Format Specifier: %f
Syntax of float
The float keyword is used to declare the variable as a floating point:

ex: float var_name
2.Integer Data Type
The integer datatype in C is used to store the integer numbers(any number including positive,
negative and zero without decimal part). 
Octal values, hexadecimal values, and decimal values can be stored in int data type in C. 

Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d
Syntax of Integer
We use int keyword to declare the integer variable:

ex:int var_name;*/

#include <stdio.h>
void main()
{
    float a=8.5;
    float b=6.9;
    float c=a++;
    float d=b++;
    printf("sum of a and b is multiplied : %f\n",a*b);
    printf("sum of b and a is addition : %f\n",b+a);
    printf("sum of show the c value : %f\n",c);
    printf("sum of c and a is division : %f\n",c/a);
    printf("sum of d value %f\n",d);
    int e=20;
    int f=259;
    int g=d--;
    printf("sum of e and f is multiplication : %f\n",e*f);
    printf("the sum of g and e is addition : d\n",g+e);
    printf("the sum of e and f is divied : %d\n",e/f);
    printf("the sum of g and f is multiplication : %d\n",g*f);
}