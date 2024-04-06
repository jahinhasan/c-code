#include<stdio.h>

int main(){
int ar[100],size,terget;
printf("array size: ");
scanf("%d",&size);
printf("enter array element: ");
for(int i=0;i<size;i++){
    scanf("%d",&ar[i]);
}
printf("enter terget element: ");
    scanf("%d",&terget);

    int low=0;
    int high=size-1;
    int found=-1;

while(low<=high){
    int mid=low+(high-low)/2;

    if(ar[mid]==terget){
        found=mid;
        break;
    }else if(ar[mid]<terget){
         low=mid+1;
    }else{
         high=mid-1;
    }
}

if(found !=-1){
    printf("the terget element %d is found at %d",terget,found);
}else{
    printf("the terget didn't found.");
}



return 0;
}

