#include<stdio.h>

int main(){
int x,y,z;

scanf("%d%d%d",&x,&y,&z);

int a[x][y][z];

for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        for(int k=0;k<z;k++){
            scanf("%d",&a[i][j][k]);
        }
    }
}

for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        for(int k=0;k<z;k++){
            printf("position = %d, %d, %d and element = %d\n",i,j,k,a[i][j][k]);
        }
    }
}





return 0;
}
