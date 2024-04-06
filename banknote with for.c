#include<stdio.h>


int main() {

    double a;

    int note[] = {100, 50, 20, 10, 5, 2};
    double coin[] = {1, 0.50, 0.25, 0.10, 0.05 , 0.01};
    int notecount[6] = {0};
    int coincount[6] = {0};

scanf("%lf" , &a);

    int totala = (int)(a*100);

  printf("NOTAS:\n");
    for(int i = 0 ; i < 6 ; i++){
        notecount[i] = totala / (note[i]*100);
        totala %= (note[i]*100);
        printf("%d nota(s) de R$ %d.00\n",notecount[i],note[i]);


    }
    printf("MOEDAS:\n");
    for(int i = 0 ; i < 6 ; i++){
            coincount[i] = totala / (coin[i]*100);
    totala %= (coin[i] * 100);
    if (coincount[i] < 0) {
            coincount[i]++;
            totala += coin[i] * 100;}
    printf("%d moeda(s) de R$ %.2lf\n",coincount[i],coin[i]/ 100.00);



    }




return 0;

}

