#include<stdio.h>

int main()
{
    int m,n,p;

    printf("first array row and colum:");
    scanf("%d %d",&m,&n);

    printf("enter second array row:");
    scanf("%d",&p);
if(n!=p){
    printf("cannot multiply.");
    }

    int a[m][n], b[n][p], c[m][p];

    printf("enter 1st array element");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter 2nd array element: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&b[i][j]);
        }
    }

   // multiply
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
                c[i][j]=0;
        for(int k=0;k<n;k++){
            c[i][j] = a[i][k] * b[k][j];
        }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
        printf("%d ", c[i][j]);
        }
        printf("\n");
    }


    return 0;
}
