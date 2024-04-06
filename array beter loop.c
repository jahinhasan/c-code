#include<stdio.h>

int main(){
   int mynumbers[]={25,50,75,100};
   int lenth=sizeof(mynumbers)/
   sizeof(mynumbers[0]);
   int i;


   for(i=0;i<lenth;i++){
   printf("%d\n", mynumbers[i]);
}

return 0;
}
