
#include<stdio.h>

int main()
{
    int arr[100];
    int size =0,pos ;
    scanf("%d",&size);

    if(size>100 || size<=0)
    {
        printf("error\n");
    }
        //element
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
        //array printing
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");


    printf("\n position: ");
    scanf("%d",&pos);

    for(int i=pos-1;i<=size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }



    return 0;
}

