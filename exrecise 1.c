#include<stdio.h>
#define pi 3.1416


int main()

{
    double length,breadth,radius,area_rectangle,perimeter_rectangle,area_circle,circumference_circle;

    scanf("%lf%lf%lf",&length,&breadth,&radius);
    area_rectangle=length*breadth;
    perimeter_rectangle=2*(length+breadth);
    area_circle=pi*radius*radius;
    circumference_circle=2*pi*radius;
    printf(("area_rectangle %lf\n")( "perimeter_rectangle %lf\n")( "area_circle %lf\n") ("circumference_circle %lf\n "),&area_rectangle,&perimeter_rectangle,&area_circle,&circumference_circle);
    return 0;

}
