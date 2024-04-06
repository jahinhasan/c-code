#include<stdio.h>

int main()
{
   float amount,discount,famount;

   scanf("%f", &amount);

   if(amount >= 101 && amount <= 200)
   {
    discount = amount * 0.05;

   }else if(amount >= 201 && amount <= 400)
   {
    discount = amount * 0.10;

   }else if(amount >= 401 && amount <= 800)
   {
    discount = amount * 0.20;

   }else if(amount > 800)
   {
    discount = amount * 0.25;

   }else{
       discount = 0;
   }


  famount = amount - discount;

  printf("the amount is %.2f\n", amount);
  printf("the discount is %.2f\n", discount);
  printf("the final amount is %.2f\n", famount);

    return 0;
}
