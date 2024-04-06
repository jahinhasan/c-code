#include<stdio.h>


int main() {

   float N;
    scanf("%f", &N);

    int i[6] = {100, 50, 20, 10, 5, 2};
    float j[6] = {1, 0.50, 0.25, 0.10, 0.05 , 0.01};
    int icount[6] = {0};
   int jcount[6] = {0};

    int ff = N*100;
    //for notes
    //for 100
    icount[0] = ff / (icount[0] * 100);
    ff %= (icount[0] * 100);
    //for 50
    icount[1] = ff / (icount[1] * 100);
    ff %= (icount[1] *100);
    //for 20
    icount[2] = ff / (icount[2] * 100);
     ff %= (icount[2] * 100);
     //for 10
     icount[3] = ff / (icount[3] * 100);
    ff %= (icount[3] * 100);
    //for 5
    icount[4] = ff / (icount[4] *100);
    ff %= (icount[4] *100);
    //for 2
    icount[5] = ff / (icount[5] *100);
    ff %= (icount[5] *100);

    //for coins
    //for 1
    jcount[0] = ff / (jcount[0] *100);
    ff %= (jcount[0] *100);
    //for .50
    jcount[1] = ff / (jcount[1] *100);
    ff %= jcount[1];
    //for 0.25
    jcount[2] = ff / (jcount[2] *100);
    ff %= (jcount[2] *100);
    //for 0.10
     jcount[3] = ff /(jcount[3] *100);
    ff %= (jcount[3] *100);
    //for.05
    jcount[4] = ff / (jcount[4] *100);
    ff %= (jcount[4] *100);
    //for .01
    jcount[5] = ff / (jcount[5] *100);
    ff %= (jcount[5] *100);

    printf("NOTAS:\n");
     printf("%d nota(s) de R$ 100.00\n",icount[0]);
     printf("%d nota(s) de R$ 50.00\n",icount[1]);
          printf("%d nota(s) de R$ 20.00\n",icount[2]);
     printf("%d nota(s) de R$ 10.00\n",icount[3]);
     printf("%d nota(s) de R$ 5.00\n",icount[4]);
     printf("%d nota(s) de R$ 2.00\n",icount[5]);

     printf("MOEDAS:\n");
     printf("%d MOEDA(s) de R$ 1.00\n",jcount[0]);
     printf("%d MOEDA(s) de R$ 0.50\n",jcount[1]);
     printf("%d MOEDA(s) de R$ 0.25\n",jcount[2]);
     printf("%d MOEDA(s) de R$ 0.10\n",jcount[3]);
     printf("%d MOEDA(s) de R$ 0.05\n",jcount[4]);
     printf("%d MOEDA(s) de R$ 0.01\n",jcount[5]);


return 0;

}

