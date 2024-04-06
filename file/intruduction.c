#include<stdio.h>

int main()
{

   FILE *file;

    file=fopen("test.txt","w");

    if(file==NULL){
        printf("file is not opened.\n");
    }else{
       printf("file is opeend.\n");
       fclose(file);
    }




    return 0;
}
