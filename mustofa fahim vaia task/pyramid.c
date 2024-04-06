/*#include <stdio.h>

int main()
{
    //inverted star pyramid
    int rows, i, j;
    scanf("%d", &rows);


    for (i = rows; i >= 1; i--)
    {

        for (j = 0; j < rows - i ; j++)
            printf(" ");


        for (j = 0; j < 2 * i - 1; j++)
            printf("*");


        printf("\n");
    }

    return 0;
}*/

//pascals triangle

/*#include <stdio.h>

int main()
{

    int rows, i, j,coef=1;
    scanf("%d", &rows);


    for (i = 0; i < rows; i++)
    {

        for (j = 0; j <= rows - i ; j++)
            printf(" ");


        for (j = 0; j <= i; j++){
            if(i == 0 || j==0){
                coef ==1;
            }else{
            coef=coef*(i-j+1)/j;
            }

            printf("%d", coef);}


        printf("\n");
    }

    return 0;
}*/
#include <stdio.h>

int main()
{
    int rows;

    scanf("%d", &rows);

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 0; j < rows - i; ++j)
        {
            printf("  ");
        }

        int num = i;
        for (int j = 1; j <= i * 2 - 1; ++j)
        {
            printf("%d ", num);
            num = j < i ? num + 1 : num - 1;
        }

        printf("\n");
    }

    return 0;
}


