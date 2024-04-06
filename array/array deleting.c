#include<stdio.h>

int main(){

int size;

printf("enter size: ");

scanf("%d",&size);

int arr[size],count=0;
printf("enter array element: ");

for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j])

                for(int k=0;k<size;k++){
                    arr[k]=arr[k+1];

                }
                size--;
                    j--;

        }
}



for(int i=0;i<size;i++){
    printf(" %d ",arr[i]);
}

return 0;
}
