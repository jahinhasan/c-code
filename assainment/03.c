
#include<stdio.h>
//smallest
int main(){
int a[30],i,n;

scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int min = a[0];
for(i=0;i<n;i++)
{
    if(a[i]<min)
    {
        min = a[i];
    }
}
printf("The smallest number is %d",min);
printf("\n");

return 0;
}
