#include<stdio.h>
//element
int main(){
int a[30],i,n,terget;

scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Terget element:- ");
scanf("%d",&terget);

int found=0;
for(i=0;i<n;i++)
{
    if(a[i]==terget)
    {
        printf("The terget number %d is found at %d\n ",terget,i);
        found=1;
        break;
    }
}

if(found==0)
{
    printf("%d not found.\n",terget);
}
printf("\n");

return 0;
}

