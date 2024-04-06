#include <stdio.h>

int main() {
    double amount;
    int notes[] = {100, 50, 20, 10, 5, 2};
    double coins[] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    int notesCount[6] = {0};
    int coinsCount[6] = {0};

    // Read the monetary value
    scanf("%lf", &amount);

    // Convert the amount to cents to avoid floating-point precision issues
    int totalCents = (int)(amount * 100);

    // Calculate the number of banknotes
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        notesCount[i] = totalCents / (notes[i] * 100);
        totalCents %= (notes[i] * 100);
        printf("%d nota(s) de R$ %d.00\n", notesCount[i], notes[i]);
    }

    // Calculate the number of coins
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        coinsCount[i] = totalCents / (coins[i] * 100);
        totalCents %= (int)(coins[i] * 100);
        printf("%d moeda(s) de R$ %.2lf\n", coinsCount[i], coins[i]);
    }

    return 0;
}
