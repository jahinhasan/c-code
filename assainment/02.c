#include<stdio.h>
//largest
int main(){
int a[30],i,n;

scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int max = a[0];
for(i=0;i<n;i++)
{
    if(a[i]>max)
    {
        max = a[i];
    }
}
printf("The largest number is %d",max);
printf("\n");

return 0;
}
