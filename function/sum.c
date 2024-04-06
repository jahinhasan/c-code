#include<stdio.h>

void sum(int a,int b,int c){

 printf("Sum of number = %d\n",a+b+c);
  printf("minus of number = %d\n",a-b-c);
 printf("avg of number = %d\n",(a+b+c)/3);

}
 int main(){
     int a,b,c;
scanf("%d %d %d",&a,&b,&c);
 sum(a,b,c);


return 0;
 }
