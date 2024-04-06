#include <stdio.h>


int main()
{
    int ages[] = {20,22,18,35,48,26,87,70};

    float avg,sum = 0;


    int length = sizeof(ages) / sizeof(ages[0]);
    int lowestage = ages[0];
  for(int i = 0; i < length; i++){
   if (lowestage > ages[i]){
   lowestage = ages[i];
   }

  }


    printf("The lowest age inthe array is: %d",lowestage);
 return 0;
}
