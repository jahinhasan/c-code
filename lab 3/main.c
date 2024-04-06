#include <stdio.h>


int main()
{
    int a, b,c;
printf("Enter three numbers:");
scanf("%d%d%d", &a, &b, &c);

int sum = a+b+c;
printf("total mark: %d\n",sum);

if(sum >= 280 && sum <=300){
printf("Grade: A\n");
}else if(sum>=260 && sum <=279){
printf("Grade: B\n");
}else if(sum>=240 && sum <=259){
printf("Grade: C\n");
}else{
    printf("Grade: D\n");}
    return 0;
}
