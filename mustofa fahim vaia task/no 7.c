#include<stdio.h>

int main(){
int num,i,Factorial = 1;

printf("enter the number:");
scanf("%d",&num);

if(num<0){
    printf("Error");
}
for(i=1;i<= num; ++i){
    Factorial *= i;

}
printf("The factorial of %d is %d",i,Factorial);

return 0;
}
