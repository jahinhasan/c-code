#include<stdio.h>

int main()
{

   FILE *file;
   char a[20]="is my name.";
   int length = strlen(a);

    file=fopen("test.txt","a");

    if(file==NULL){
        printf("file is not opened.\n");
    }else{
       printf("file is opeend.\n");
       for(int i=0;i<length;i++){
        fputc(a[i],file);
       }
       printf("file writeen successfully.\n");
       fclose(file);
    }




    return 0;
}
