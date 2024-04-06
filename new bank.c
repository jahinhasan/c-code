#include<stdio.h>

int main()
{
    double amount;
    int notecount,coincount;

    scanf("%lf", &amount);
    int totalcount = (int)(amount * 100);

    printf("NOTAS:\n");
    notecount = totalcount / 10000;
    totalcount %= 10000;
    printf("%d nota(s) de R$ 100.00\n",notecount);

    notecount = totalcount / 5000;
    totalcount %= 5000;
    printf("%d nota(s) de R$ 50.00\n",notecount);

    notecount = totalcount / 2000;
    totalcount %= 2000;
    printf("%d nota(s) de R$ 20.00\n",notecount);

    notecount = totalcount / 1000;
    totalcount %= 1000;
    printf("%d nota(s) de R$ 10.00\n",notecount);

    notecount = totalcount / 500;
    totalcount %= 500;
    printf("%d nota(s) de R$ 5.00\n",notecount);

    notecount = totalcount / 200;
    totalcount %= 200;
    printf("%d nota(s) de R$ 2.00\n",notecount);

    printf("MOEDAS:\n");
    coincount = totalcount /100;
    totalcount %= 100;
    printf("%d nota(s) de R$ 1.00\n",coincount);

    coincount = totalcount /50;
    totalcount %= 50;
    printf("%d nota(s) de R$ 0.50\n",coincount);

    coincount = totalcount /25;
    totalcount %= 25;
    printf("%d nota(s) de R$ 0.25\n",coincount);

    coincount = totalcount / 10;
    totalcount %= 10;
    printf("%d nota(s) de R$ 0.10\n",coincount);

    coincount = totalcount / 5;
    totalcount %= 5;
    printf("%d nota(s) de R$ 0.05\n",coincount);

    printf("%d nota(s) de R$ 0.01\n",totalcount);




    return 0;
}
