#include<stdio.h>
void calculation(double base, double exp){
    double result =1;
for(int i=1;i<=exp;i++){
     result = result * base;
}
printf("%.1lf\n",result);

}
int main(){
double base,exp;
printf("enter exp and base: ");
scanf("%lf%lf",&base,&exp);

calculation(base,exp);



}
