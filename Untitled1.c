#include<stdio.h>

int main() {

int A, B,C,D;
printf("Enter three numbers:");
scanf("%d%d%d", &A, &B, &C);
D=A+B+C;
float avg=D/3;
printf("sum-%d average=%.2f", D, avg);
return 0;
}
