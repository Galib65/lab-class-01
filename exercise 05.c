#include<stdio.h>

#define pi 3.1416

int main()

{
        double length,breadth,radious,area_rectengle,perimeter_rectengle,area_circle,circumference_circle;

        printf("enter thr length:");
        scanf("%lf",&length);

        printf("enter the breadth:");
        scanf("%lf",&breadth);

        printf("enter radious:");
        scanf("%lf",&radious);

        area_rectengle=length*breadth;

        perimeter_rectengle=2*(length+breadth);

        area_circle=pi*radious*radious;

        circumference_circle=2*pi*radious;

        printf("Area of the rectengle:%.3lf\n",area_rectengle);

        printf("perimeter of rectengle:%.3lf\n",perimeter_rectengle);

        printf("area of the circle:%.3lf\n",area_circle);

        printf("circumference of circle:%.3lf",circumference_circle);

        return 0;


}
