#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice;
    int Account_no;
    char name[25];
    float balance;

    FILE *fp;
    fp=fopen("Account.dat","r");

    if(fp==NULL)
    {
        printf("Unable of open file...");
        exit(0);
    }
    else
    {   printf("\t\t**\n\t\t MENU\n\t\t**\n");
        printf("\tHere is the List that You Perform the Operations: ");
        printf("\n\n");
        printf("\tEnter 1 for the List of Accounts whose balance is Zero(0): \n");
        printf("\tEnter 2 for the List of Accounts whose balance is More than zero: \n");
        printf("\tEnter 3 for the List of Accounts whose balance is On debit: \n ");
        printf("\tEnter 4 to Exit from Program: \n");
        printf("\n");
        printf("Enter Your Choice: ");
        scanf("%d",&choice);

        while(choice!=4)
             {
                switch(choice)
                {
                case 1:
                    printf("Accounts Whose Balance is Zero: ");
                    printf("\n");
                    fscanf(fp,"%d%s%f",&Account_no,name,&balance);
                    while(!feof(fp))
                    {
                        if(balance==0)
                            {
                       printf("%10d%13s%7.2f\n",Account_no,name,balance);

                            }// end if
                      fscanf(fp,"%d%s%f",&Account_no,name,&balance);
                    }// end while
                break;

                case 2:
                    printf("Accounts Whose Balance is Greater than Zero: ");
                    printf("\n");
                    while(!feof(fp))
                    {
                        if(balance>0){
                            printf("%10d%13s%7.2f",Account_no,name,balance);
                            }// end if
                               fscanf(fp,"%d%s%f",&Account_no,name,&balance);
                    }// end while
            break;

                   case 3:
                         printf("Accounts Whose Balance is on debit: ");
                    printf("\n");
                    while(!feof(fp))
                    {
                        if(balance<0){
                            printf("%10d%13s%7.2f",Account_no,name,balance);
                            }// end if
                               fscanf(fp,"%d%s%f",&Account_no,name,&balance);
                    }// end while
                break;
             }

             rewind(fp);
             printf("\n\n");

  printf("\t\t**\n\t\t MENU\n\t\t**\n");
        printf("\tHere is the List that You Perform the Operations: ");
        printf("\n\n");
        printf("\tEnter 1 for the List of Accounts whose balance is Zero(0): \n");
        printf("\tEnter 2 for the List of Accounts whose balance is More than zero: \n");
        printf("\tEnter 3 for the List of Accounts whose balance is On debit: \n ");
        printf("\tEnter 4 to Exit from Program: \n");
        printf("\n");
        printf("Enter Your Choice: ");
        scanf("%d",&choice);


 }// end main while
   fclose(fp);


}//end else

                    return 0;
}/
