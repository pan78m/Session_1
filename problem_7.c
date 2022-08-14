 // 7. Write a C program  to find out area of a circle      ( formula :  3.1416 * r * r  )
   #include <stdio.h>
   #include <stdlib.h>
   #include<conio.h>
   
   /**
    * @brief description
    * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
    * @date 2022-08-14 (18:29)
    * 
    * @returns int
    */
   
   int main()
   {
        // Let's start here
        float radius,area;
        printf("\nenter the radius of the circle:\n");
        scanf("%f",&radius);
        printf("radius value is=%.3f\n",radius);
        area=3.1416*radius*radius;
        printf("Area of the circle is=22/7 X%.3fX%.3f=%.3f\n",radius,radius,area);
        return 0;
   }
 