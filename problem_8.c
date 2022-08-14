// 8. Write a C program  to find out area of a triangle ( এটার ফর্মুলা দিলাম না, আপনি একটু কষ্ট করেন )
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
    float base, height, area;
    printf("\nenter base & height of triangle :\n");
    scanf("%f%f", &base, &height);
    printf("base value is=%.4f\nheight value is=%.4f\n", base, height);
    area =0.5* (base*height);
    printf("Area of the triangle value is=1/2X%.4fX%.4f=%.4f\n", base, height, area);
    getch();

    return 0;
}