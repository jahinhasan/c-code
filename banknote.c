#include <stdio.h>

int main() {
    // Read the integer value
    int N;
    scanf("%d", &N);

    // Array to store the denominations of banknotes
    int banknotes[] = {100, 50, 20, 10, 5, 2, 1};

    printf("%d\n", N); // Print the read number

    // Iterate through each banknote denomination
    for (int i = 0; i < 7; i++) {
        // Calculate the number of banknotes needed for the current denomination
        int num_banknotes = N / banknotes[i];
        N %= banknotes[i]; // Update the remaining value
        // Print the number of banknotes for the current denomination
        printf("%d nota(s) de R$ %d,00\n", num_banknotes, banknotes[i]);
    }

    return 0;
}

