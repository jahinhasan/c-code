#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
    {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("Vowel in capital letter");
        }else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            printf("Vowel in small letter");
        }else if(ch>='B' && ch <='Z' )
        {
             printf("Consonent in capital letter");
        }else if(ch>='b' && ch <='z' )
        {
             printf("Consonent in small letter");
        }
        else{
         printf("neither a vowel nor a consonent");
        }
    }





    return 0;
}
