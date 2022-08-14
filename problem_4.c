 // 4. Write a C program  that takes two float number as user input, multiply them and print the result
#include <stdio.h>
#include <conio.h>

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-08-14 (18:13)
 *
 * @returns int
 */

int main()
{
    // Let's start here
    float a, b, mul;
    printf("\nenter two number :\n");
    scanf("%f%f", &a, &b);
    printf("a value is=%.3f\nb value is=%.3f\n", a, b);
    mul = a * b;
    printf("multiply value is=%.3fX%.3f=%.3f\n", a, b, mul);
    getch();

    return 0;
}