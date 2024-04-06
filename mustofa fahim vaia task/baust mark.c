#include<stdio.h>

int main()
{

    int math,cha,phy,total;
    scanf("%d %d %d", &math, &cha, &phy);

    total = math + phy + cha;

    if(math >= 60 && cha >= 50 &&
            phy >=40 && (total >= 200 ||
                         (math + phy) >=150 )
      )
    {
        printf("Your are eligible for BAUST admission Test");
    }
    else
    {
        printf("Your are not eligible for BAUST admission Test");
    }
    return 0;
}
