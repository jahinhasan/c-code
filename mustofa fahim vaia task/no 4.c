#include<stdio.h>

int main(){
 float C,F;
printf("enter tempareture in celsius :");
scanf("%f", &C);

F = ((9/5)*C)+32;
printf("celsius to farhrenheit: %.2f",F);


return 0;
}

