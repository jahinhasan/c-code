#include<stdio.h>

int main()
{

float num;
int choice;

printf("1:Feet to Meters,2:Meter to Feet.");
printf("Enter choice .");
scanf("%d", &choice);
if (choice==1)
{
printf("Enter number of Feet:");
scanf("%f", &num);
printf("meters: %f" ,num*3.28);
}
else{
printf("Enter number of meter:");
scanf("%f",&num);
printf("Feet:%f",num/3.28);
}
return 0;
}
