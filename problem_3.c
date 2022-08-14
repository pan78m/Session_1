// 3. Write a C program  that takes two integer number as user input, subtract them and print the result
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
    int a, b, sub;
    printf("\nenter two number :\n");
    scanf("%d%d", &a, &b);
    printf("a value is=%d\nb value is=%d\n", a, b);
    sub = a - b;
    printf("subtract value is=%d-%d=%d\n", a, b, sub);
    getch();

    return 0;
}