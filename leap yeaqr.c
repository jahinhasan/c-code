#include<stdio.h>

int main()
{
    int year;
    printf("enter year:");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
    {
        printf("this year is leap year.\n");
    }
    else
    {
        printf("tis year is not leap year.\n");
    }


    return 0;
}
