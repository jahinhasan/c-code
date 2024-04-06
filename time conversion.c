#include<stdio.h>


int main() {

   int N;
    scanf("%d", &N);

    int i[] = {100, 50, 20, 10, 5, 2};
    float j[] = {1, 0.50, 0.25, 0.10, 0.05 , 0.01}
    printf("%d\n", N);


    for (int i = 0; i < 7; i++) {
        int num_banknotes = N / banknotes[i];
        N %= banknotes[i];
        printf("%d nota(s) de R$ %d,00\n", num_banknotes, banknotes[i]);
    }
    return 0;
}

return 0;

}
