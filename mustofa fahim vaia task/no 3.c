#include<stdio.h>

int main(){
 int a,b,c;
printf("enter three number:");
scanf("%d %d %d", &a,&b,&c);
int greatest = (a>b)?((a>c)?a:c):((b>c)?b:c);{
printf("%d", greatest);
}

return 0;
}

