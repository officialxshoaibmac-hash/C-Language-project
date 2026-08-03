#include <stdio.h>

int main()

{
//using all arithmetic operations
    printf("using all arithmetic operations\n");

    printf("Enter two numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);


return 0;
}
