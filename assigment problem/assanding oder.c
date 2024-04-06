#include<stdio.h>

int main ()
{
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    if(b >= a && c >= a){
        if(b<=c){
            printf("assanding value %d,%d,%d",a,b,c);
        }else{
        printf("assanding value %d,%d,%d",a,c,b);
        }
    }else if(a>=b && c>=b){
     if(a<=c){
            printf("assanding value %d,%d,%d",b,a,c);
        }else{
        printf("assanding value %d,%d,%d",b,c,a);
        }
    }else{
     if(a<=b){
            printf("assanding value %d,%d,%d",c,a,b);
        }else{
        printf("assanding value %d,%d,%d",c,b,a);
        }
    }
 return 0;

}
