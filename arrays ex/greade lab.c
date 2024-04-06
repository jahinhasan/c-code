#include<stdio.h>

int main(){

int a,b,c;

printf("enter the score: ");
scanf("%d%d%d", &a,&b,&c);
int sum = a+b+c;
 printf("Total number: %d",sum);

if(sum >= 285 && sum <=300){
printf("Grade: A+\n");
}else if(sum>=250 && sum <=284){
printf("Grade: B+\n");
}
else if(sum>=200 && sum <=249){
printf("Grade: C+\n");
}
else{
    printf("Grade: F\n");}

if(sum%2==0){
    printf("The number is even\n");
}else{
printf("The number is odd\n");}

if(sum%2==0){
    printf("The number is even\n");
    sum++ ;
}else{
printf("The number is odd\n");}
printf ("odd part reminder: %d\n",sum % 2);

return 0;
}

