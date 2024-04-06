#include<stdio.h>

int main()
{
    int arr[100];
    int size =0 ;
    scanf("%d",&size);

    if(size>100 || size<=0)
    {
        printf("error\n");
    }
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n");
    int ele,pos;
    printf("position:");
    scanf("%d",&pos);
    printf("element:");
    scanf("%d",&ele);

    if(pos<=0 || pos>size)
    {
        printf("cannot");
    }
    else
    {
        if(size<100)
        {
            for(int i=size; i>=pos-1; i--)
            {
                arr[i+1]=arr[i];
            }
            arr[pos-1]=ele;
            size++;
        }
        for(int i=0; i<size; i++)
        {
            printf("%d ",arr[i]);
        }

    }

    //deletion
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
