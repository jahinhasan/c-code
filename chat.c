#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", N);

    int banknotes[] = {100, 50, 20, 10, 5, 2, 1};
    int i, count;
    for (i = 0; i < 7; i++) {
        count = N / banknotes[i];
        printf("%d nota(s) de R$ %d,00\n", count, banknotes[i]);
        N %= banknotes[i];
    }

    return 0;
}

