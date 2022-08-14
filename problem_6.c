 // 6. Write a C program  to find out area of a square    ( formula :   a * a )
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
    float a, area;
    printf("\nenter value of square length :\n");
    scanf("%f", &a);
    printf("a value is=%.3f\n", a);
    area = a * a;
    printf("Area value is=%.3fX%.3f=%.3f\n",a, a,area);
    getch();

    return 0;
}