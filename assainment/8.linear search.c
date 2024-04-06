#include<stdio.h>

int main(){
int ar[100],size,terget,found=0;
printf("array size: ");
scanf("%d",&size);

printf("enter terget element: ");
    scanf("%d",&terget);

printf("enter array element: ");
for(int i=0;i<size;i++){
    scanf("%d",&ar[i]);
}
for(int i=0;i<size;i++){
    if(ar[i]==terget){
        printf("the terget element %d is found at %d",terget,i);
        found=1;
        break;

    }
}
if(found==0){
        printf("terget element did found.");
}

return 0;
}
