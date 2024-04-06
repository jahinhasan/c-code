#include<stdio.h>
int main()
{
    int a = 10, b = 20, sum;
    sum=a+b;
    a = b;
    printf("The result is: %d\n%d\n%d", sum, a, b);

    return 0;
}
