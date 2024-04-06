#include<stdio.h>

int main(){
 float a,b,c;
 char operator;

 printf("enter operator(+,-,*,/):");
 scanf("%c",&operator);
printf("enter two number:");
scanf("%f %f", &a,&b);
switch (operator){
case '+':
    c = a + b;
    printf("result: %.3f + %.3f = %.3f\n",a,b,c);
break;
case '-':
    c = a - b;
    printf("result: %.3f - %.3f = %.3f\n",a,b,c);
break;
case '*':
    c = a * b;
    printf("result: %.3f * %.3f = %.3f\n",a,b,c);
break;
case '/':
    c = a / b;
    printf("result: %.3f / %.3f = %.3f\n",a,b,c);
break;
default:
    printf("invaild");
    break;
}

return 0;
}

