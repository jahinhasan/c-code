#include<stdio.h>

int main()
{
    int arr1[100],arr2[100],merarr[200];
    int n1,n2,mersize;

    printf("enter the size of first array: ");
    scanf("%d",&n1);

    for(int i=0; i<n1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    //printf("\n");
    printf("enter the size of second array: ");
    scanf("%d",&n2);
    for(int i=0; i<n2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("\n");

    mersize = n1 + n2;
    for(int i=0; i<n1; i++)
    {
        merarr[i]=arr1[i];
    }
    for(int i=0; i<n2; i++)
    {
        merarr[n2+i]=arr2[i];
    }

    for(int i=0; i<mersize; i++)
    {
        printf(" %d ",merarr[i]);
    }


    return 0;
}
