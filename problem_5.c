 // 5. Write a C program  that takes two double number as user input, divide them and print the result
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
    double a, b, div;
    printf("\nenter two number :\n");
    scanf("%lf%lf", &a, &b);
    printf("a value is=%.3lf\nb value is=%.3lf\n", a, b);
    div = a / b;
    printf("divided value is=%.3lf/%.3lf=%.3lf\n", a, b, div);
    getch();

    return 0;
}