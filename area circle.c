#include<stdio.h>

int main()
{
float radius, area;
const float pi=3.1416;

printf("Enter the radius of circle: ");
scanf("%f", &radius);

area=pi*radius*radius;

printf("The area of the circle is: %.2f\n", area);
return 0;
}
