#include<stdio.h>

int main(){

 int a ,b,c, greatest;

 scanf("%d %d %d", &a, &b, &c);

    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("%d eh o maior\n", greatest);

return 0;

}
