#include <stdio.h>

int main() {
    int n, mark, total_marks , min = 10;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the CT marks:\n");
    for(int i = 1; i <= n; i++) {
        printf("- %dth CT Marks: ", i );
        scanf("%d", &mark);

        total_marks += mark;
        if(mark < min) {
            min = mark;
        }
    }

    total_marks -= min;

    float average = (float)total_marks / (n - 1);

    printf("Average of best %d CT marks: %.2f\n", n - 1, average);
    return 0;
}
