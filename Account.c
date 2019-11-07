#include<stdio.h>

int main()
{
 int an,tc;
 float ib,tcr,cl,nb;

 printf("Enter account number (-1 to end):");
 scanf("%d",&an);


 while(an!=-1){

 printf("Enter initial balance:");
 scanf("%f",&ib);
 printf("Enter total charges:");
 scanf("%d",&tc);
 printf("Enter total credit:");
 fflush(stdin);
 scanf("%f",&tcr);
 printf("Enter credit limit:");
 scanf("%f",&cl);

 printf("Account number:%d\n",an);
 printf("Credit limit:%.0f\n",cl);
 nb=(ib+tc)-tcr;
 printf("Balance is:%.2f\n",nb);
 if(nb>cl){
        printf("Credit limit exceeded!!!!!\n");
 }
 printf("\nEnter account number (-1 to end):");
 scanf("%d",&an);
 }
  return 0;
}
