#include<stdio.h>
int main()
{
int a,b;
printf("enter two value:");
scanf("%d%d",&a,&b);

float quotient=a/b;
float remainder=a%b;

printf("Quotient is:%f\n Remainder is: %f",quotient,remainder);
return 0;
}
