#include<stdio.h>


int main(){

int i,n,m,sum =0;

scanf("%d %d",&n,&m);

for(i=n;i<=m;i++){

    if(i<=1){
        continue;
    }


    int prime=1;
    for(int j=2; j*j<=i;j++){
        if(i%j==0){
            prime=0;
            break;
        }
    }
    if(prime){
        sum += i;
    }
}

printf("sum =  %d",sum);



return 0;
}
