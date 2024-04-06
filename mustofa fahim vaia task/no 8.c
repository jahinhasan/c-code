#include<stdio.h>

int main(){
char cha;
printf("Enter the letter:");
scanf("%c", &cha);

cha |= 32 ;

if(cha >= 'a' && cha <= 'z'){

    if(cha == 'a' || cha=='e' || cha=='i' || cha=='o' || cha=='u'){
        printf("This latter is vowel.\n");
    }else {
    printf("This is consonent.\n");
    }
   } else{

    printf("%c is not a latter.\n",cha);

}


return 0;
}
