// Preprocessor Command
// It takes whatever is written in stdio.h to include this file
#include <stdio.h>

int main()
{
    // Single Line Comments
    // Compiler will ignore Comments

    /*
    This is a Multi
    Line 
    Comment
    */

    // Escape Sequence
    // \n is new line character

    // Every C program ends with ;

    // A data type specifies the type of data that a variable can store
    // Variable is Container to store Value
    // int - Data Type
    // a - Container

    // Data Type                       // Size
    int a1 = 7;                        // 2 to 4 bytes
    unsigned short integer = 8;        // 2 bytes
    long integer1 = 8;                 // 4 bytes
    short integer2 = 8;                // 2 bytes
    char c1 = 't';                     // 1 byte
    float b1 = 8.0;                    // 4 bytes - 6 decimal precision
    double myfloat1 = 7.45;            // 8 bytes - 15 decimal places precision
    long double myfloat2 = 7.43453455; // 10 bytes - 19 decimal places precision

    // sizeof is a unary operator
    // It generates the storage size of an expression or a data type

    printf("hello %c", c1);
    printf("The size taken by int is %d\n", sizeof(int));
    printf("The size taken by unsigned int is %d\n", sizeof(unsigned int));
    printf("The size taken by float is %d\n", sizeof(float));
    printf("The size taken by double is %d\n", sizeof(double));
    printf("The size taken by long double is %d\n", sizeof(long double));
    
    // %d: It is a format specifier used to print an integer value.
    // %s: It is a format specifier used to print a string.
    // %c: It is a format specifier used to display a character value.
    // %f: It is a format specifier used to display a floating point value.

    // Rules for Creating Variables is like human name except _

    int ashName;     // Variable declaration
    ashName = 76;    // Variable initialization
    char five = '5'; // Variable declaration and initialization

    // Cannot be change
    const int i = 9;
    // i = 10; // Not Possible

    // Arithmetic Operators
    int a = 60, b = 7, c = 8;
    printf("The sum of a and b is %d\n", a + b);
    printf("The difference of a and b is %d\n", a - b);
    printf("The multiplication result of a and b is %d\n", a * b);
    printf("The division result of a and b is %d\n", a / b);
    printf("The modulo result of a and b is %d\n", a % b); // Remainder
    printf("The increment result of a is %d\n", ++a);
    printf("The decrement result of a is %d\n", --b);

    // Relational Operators
    int harry = 9, rohan = 45;
    printf("%d\n", harry == rohan);
    printf("%d\n", harry != rohan);
    printf("%d\n", harry > rohan);
    printf("%d\n", harry < rohan);

    // Logical Operators
    // AND(&&) ; It returns true when both conditions are true
    // OR(||) ; It returns true when at-least one of the condition is true
    int h = 0, j = 1;
    printf("The logical operator returned %d\n", h && j);
    printf("The logical operaTor returned %d\n", h || j);
    printf("The logical operator returned %d\n", !j);
    printf("The logical operator returned %d\n", !h);

    // Bitwise Operators
    // A = 60 B=13
    // A = 00111100
    // B = 00001101
    // The output of bitwise AND is 1 if the corresponding bits of two operands is 1
    // The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1
    // The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite
    // Bitwise compliment operator is an unary operator (works on only one operand) as It changes 1 to 0 and 0 to 1

    // Right shift operator shifts all bits towards right by certain number of specified bits
    // 212 = 11010100 (In binary)
    // 212>>2 = 00110101 (In binary) [Right shift by two bits]
    // 212>>7 = 00000001 (In binary)
    // 212>>8 = 00000000
    // 212>>0 = 11010100 (No Shift)

    // Left shift operator shifts all bits towards left by a certain number of specified bits and bit positions that have been vacated by the left shift operator are filled with 0
    // 212 = 11010100 (In binary)
    // 212<<1 = 110101000 (In binary) [Left shift by one bit]
    // 212<<0 = 11010100 (Shift by 0)
    // 212<<4 = 110101000000 (In binary) =3392(In decimal)

    int A = 60, B = 14;
    printf("Bitwise and operator returned %d\n", A & B);
    printf("Bitwise or operator returned %d\n", A | B);
    printf("Bitwise xor operator returned %d\n", A ^ B);
    printf("Bitwise ones complement operator returned %d\n", ~B);
    printf("Bitwise left shift operator operator returned %d\n", A << B);
    printf("Bitwise right shift operator operator returned %d\n", A >> B);

    // Assignment Operators
    // =, +=, -=, *=, %=, etc
    int ha = 9;
    ha += 9;
    printf("ha is %d\n", ha);

    // Input from user
    int ashInput;
    printf("\n Please enter the value of harryInput");
    scanf("%d", &ashInput);
    printf("\n You Entered %f as harryInput", (float)ashInput); // Typecasting

    // Divide 2 numbers
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("\n num1/num2 is %f", (float)num1 / num2);

    // Decision Making

    // if-else
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    age = 44;
    if (age < 18)
    {
        printf("You can drive");
    }
    else if (age >= 18 && age <= 24)
    {
        printf("You are banned from driving");
    }
    else
    {
        printf("You can drive but drive carefully");
    }

    // switch-case
    char operator;
    double n1, n2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);
    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;
        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }

    // Short Hand if else
    int i4 = age > 3 ? 100 : 200;
    printf(" %d ", i4);

    // Loops
    int index = 0;
    while (index < 10)
    {
        printf("%d\n", index);
        index++;
    }
    for (int j = 0; j < 67; j++)
    {
        printf("%d\n", j);
    }
    do
    {
        printf("do while loop is running");
    } while (j > 65656); // Atleast One time Output

    // Return value
    return 0;
}
