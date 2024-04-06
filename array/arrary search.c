#include<stdio.h>

int main(){
int size;
printf("enter size: ");
scanf("%d",&size);
int arr[size],i;
printf("enter element:\n");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
int element;
printf("enetr search element: \n");
scanf("%d",&element);
int found = 0;
for( i=0;i<size;i++){
    if(arr[i] == element){
        found=1;
        break;
    }
}
if(found != 0){
    printf("%d found in %d\n",element,i+1);
}else{
 printf("element didn't found\n");
}
return 0;
}



