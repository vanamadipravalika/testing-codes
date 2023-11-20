/*c programing for integers
Integer Data Type
The integer datatype in C is used to store the integer numbers(any number including positive, negative and zero without decimal part).
 Octal values, hexadecimal values, and decimal values can be stored in int data type in C.
Range: -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d
Syntax of Integer
We use int keyword to declare the integer variable.*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("a ki number allow chayi\n");
    scanf("%d",&a);
    printf("b ki number allow chayi\n");
    scanf("%d",&b);
    printf("c ki numbers allow chayi\n");
    scanf("%d",&c);
    printf("sum of two numbers are a and b is %d\n",a+b);
    printf("%d\n",b-c);//the operands c is subtracted from b.
    printf("%d\n",a*b);//The operands a is mulitiplied by b.
    printf("%d\n",c%a);//The operands c is modules by a.
    printf("%d\n",b/c);//The operands b is divided by c.
    return 0;
}