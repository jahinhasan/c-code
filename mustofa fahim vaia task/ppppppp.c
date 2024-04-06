#include <stdio.h>
int main()
{
    int i,f = 0;
    for (i=0; i<=50; i++)
    {
        /*  if (i%2!=0)
          {
              printf("%d Is odd.\n", i);
          }
          else
          {
              printf("%d Is even.\n", i);
          }*/
        f=f+i;
        //i=f;
        printf("%d\n", f);
    }
    //printf("%d", f);
    return 0;
}
