#include<stdio.h>
int main(void)
{
int a,b,temp;

printf("enter two values:");
scanf("%d%d",&a,&b);

printf("Before swaping: a=%d, b=%d\n", a,b);

temp =a;
a=b;
b=temp;

printf("after swapping: a=%d, b=%d\n",a,b);


return 0;
}
