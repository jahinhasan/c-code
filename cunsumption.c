#include<stdio.h>
#include<math.h>

int main (){
float x1,x2,y1,y2;
scanf("%f %f\n", &x1, &y1);
scanf("%f %f", &x2, &y2);
float A = x2 - x1;
float B = y2 - y1;
float distance =sqrt(A*A + B*B) ;

printf("%.4f\n" , distance);

return 0;

}
