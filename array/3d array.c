#include <stdio.h>
#include<conio.h>>


int main() {
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int array[x][y][z];

    // Input the values for the array
    printf("Enter %d*%d*%d integers for the 3D array:\n", x, y, z);


        for (int i = 0; i < y; i++) {
            for (int j = 0; j < z; j++) {
                    for (int k = 0; k < x; k++) {
                scanf("%d", &array[i][j][k]);
            }
        }
    }
void clrscr();
    // Print the array as a matrix
    printf("3D Array printed as a matrix:\n");


        for (int i = 0; i < y; i++) {
            for (int j = 0; j < z; j++) {
                    for (int k = 0; k < z; k++) {
                printf("%3d ", array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
