#include<stdio.h>

int main(){

int arr[100];
int size;

printf("enter array size: ");
scanf("%d",&size);
printf("enter array element: ");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}

int max = arr[0];

for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}

printf("%d",max);
return 0;
}
