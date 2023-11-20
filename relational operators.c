// c programe
/*Integer DataType
    The integer datatype in C is used to store the integer
    numbers(any number including positive, negative and zero without decimal part)
        .Octal values,
    hexadecimal values, and decimal values can be stored in int data type in C.
    1.Range : -2, 147, 483, 648 to 2, 147, 483, 647
     2.Size : 4 bytes
      3.Format Specifier : % d 
      Syntax of Integer We use int keyword to declare the integer variable :*/

#include <stdio.h>
    int main()
{
    int a, b, c, d;
    a = 50;
    b = 65;
    c = 50;
    d = 78;
    printf("the sum of a and b %d\n", a == b); //If the values is a==b are equal, then the condition becomes true.
    printf("the sum of a and c %d\n", a > c); //If the value of a>c If yes,then the condition becomes true.
    printf("the sum of c and d %d\n", c < d);  //If the value of c less than the value of d.If yes,then the condition becomes true.
    printf("the sum of b and c %d\n", b >= c); //If the value of b is greater than or equal to the value of c.If yes,then the condition becomes true.
    printf("the sum of d and a %d\n", d >= a); //If the value of d is greater than or equal to the value of a. If yes, then the condition becomes true.
    printf("the sum of b and d %d\n", b == d); //If the values of two operands are equal or not. If yes, then the condition becomes true.
    printf("the sum of d and b %d\n", d != b); //If the values of two operands are equal or not. If the values are not equal, then the condition becomes true.
    printf("the sum of c and a %d\n", c <= a); //If the values of two operands are equal or not. If the values are not equal, then the condition becomes true.
    return 0;
}