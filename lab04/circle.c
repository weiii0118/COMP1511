#include <stdio.h>
#include <math.h>

double area(double radius);
double circumference(double radius);
double diameter(double radius);

int main(void){
    double radius;

    printf("enter circle radius: ");
    scanf("%lf",&radius);

    printf("area          = %lf\n",area(radius));
    printf("circumference = %lf\n",circumference(radius));
    printf("diameter      = %lf\n",diameter (radius));

    return 0;
}

double area(double radius){
    return radius*radius*M_PI;
}

double circumference(double radius){
    return radius*2*M_PI;
}

double diameter(double radius){
    return radius*2;
}