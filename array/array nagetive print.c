#include<stdio.h>

int main(){

int x,sum=0;

scanf("%d",&x);

int a[x];

for(int i = 0;i<x;i++){
    scanf("%d",&a[i]);
}

/*for(int i=0;i<x;i++){
    if(a[i]<0){
        printf("%d\n",a[i]);
    }
}*/
printf("sum\n");
for(int i=0;i<x;i++){

     sum += a[i];
}
printf("%d\n",sum);

return 0;
}
