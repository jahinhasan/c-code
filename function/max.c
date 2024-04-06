#include<stdio.h>
/*int array(int x[]){

for(int i=0;i<5;i++){
    printf("%d ",x[i]);
}

}*/
int maximum(int x[]){
  int max=x[0];
  for(int i=1;i<5;i++){
    if(max<x[i]){
        max=x[i];
    }
    return max;
}

}
int main(){

int a[100];
printf("enter element: \n");
for(int i=0;i<5;i++){
     scanf("%d",&a[i]);
}


//array(a);

int maxvalue = maximum(a);

printf("max = %d",maxvalue);



}

