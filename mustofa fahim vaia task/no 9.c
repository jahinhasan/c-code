#include<stdio.h>

int main()
{
    int amount , notecount20,notecount10, left;
    printf("Enter amount:");
    scanf("%d", &amount);

notecount20 = amount / 20;
    left %= 20;
    printf("total notes of 20: %d\n",notecount20);
notecount10 = left/10;
    printf("total notes of 10 :%d\n",notecount10);



    return 0;
}
