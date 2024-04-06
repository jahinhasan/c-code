#include<stdio.h>

int main()
{

    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c)
    {
        printf("The leargest number is: %d ",a);
    }
    else if(b>a && b>c)
    {
        printf("The leargest number is: %d ",b);
    }
    else
    {
        printf("The leargest number is: %d ",c);
    }
    return 0;
}
