#include<stdio.h>

int main(){

int score;

printf("enter the score: ");
scanf("%d", &score);

if(score >= 90 && score <=100){
printf("Grade: A\n");
}else if(score>=80 && score <=89){
printf("Grade: B\n");
}else if(score>=70 && score <=79){
printf("Grade: C\n");
}else{
    printf("Grade: D\n");}

return 0;
}
