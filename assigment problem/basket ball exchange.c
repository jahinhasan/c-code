/*#include<stdio.h>
//(i)
int main()
{
    int basket_1 =10,basket_2 = 20;
    int ball_1 = 20 , ball_2 = 10;

    int temp = ball_1;
    ball_1 = basket_1;
    basket_1=temp;

    temp = ball_2;
    ball_2 = basket_2;
    basket_2 = temp;

    printf("after swaping basket 1 = %d\n", basket_1);
    printf("after swaping basket 2 = %d\n", basket_2);
    printf("after swaping ball 1 = %d\n", ball_1);
    printf("after swaping ball 2 = %d\n", ball_2);


    return 0;
}*/
#include<stdio.h>
//(ii)
int main()
{
    int basket_1 =10,basket_2 = 20;
    int ball_1 = 20 , ball_2 = 10;

    int total = basket_1 + ball_1;
        ball_1 = total - ball_1;
        basket_1 = total-basket_1;


     int total2 = basket_2 + ball_2;
        ball_2 = total2 - ball_2;
        basket_2 = total-basket_2;

    printf("after swaping basket 1 = %d\n", basket_1);
    printf("after swaping basket 2 = %d\n", basket_2);
    printf("after swaping ball 1 = %d\n", ball_1);
    printf("after swaping ball 2 = %d\n", ball_2);


    return 0;
}
