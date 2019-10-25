#include<stdio.h>
#include<conio.h>

int main()

{

    int price;
    int quantity;
    int discount;
    int total1;
    int total2;

    printf("Enter the quantity you want to buy:  ");
    scanf("%d",&quantity);

    printf("Enter the price per quantity:  ");
    scanf("%d", &price);


    if(quantity>1000)
    {
      discount=quantity*10/100;
      total1=(price*quantity)-discount;
      printf("This total price is %d",total1);

    }

      else
      {
          total2=price*quantity;
          printf("The total price is %d",total2);
      }

      system("pause");
      return 0;

}
