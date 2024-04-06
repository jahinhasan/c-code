#include<stdio.h>

int main()
{
    int n,fact=1;

    scanf("%d",&n);

    if(n<0)
    {
        printf("negetive number cann't be use.\n");
    }
    else
    {
        for(int i=n; i>=1; i--)
            fact *= i;
    }
    printf("%d! = %d\n",n,fact);


    return 0;
}
