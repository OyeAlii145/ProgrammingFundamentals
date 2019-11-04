/* This program is prepared by FAIZAN ALI(SP19-BCS-145)
  on Date=03 Nov 2019
  This program is for Gold conversion*/
  
#include<stdio.h>

// Function prototypes
float rattiTomasha(float x);
float mashaToratti(float x);
float mashaTotola(float x);
float tolaTomasha(float x);
float tolaToser(float x);
float serTotola(float x);
   
   // Main Function
   int main()
   
   {
	int choice;
	float value, result;
	
	// Menu Loop
	while(choice!=7)
	{
 printf("\nEnter 1 ratti to masha\n Enter 2 masha to ratti\n Enter 3 masha to tola\n Enter 4 tola to masha\n Enter 5 tola to ser\n Enter 6 ser to tola\n Enter 7 to exit\n Your Choice:");
		scanf("%d",&choice);
     
       // Choices user have
       switch(choice)
       {
       	case 1:
		    printf("Enter weight in Ratti: ");
		    scanf("%f",&value);
		    result=rattiTomasha(value);
		    printf("The %0.2f Ratti = %0.2f Masha",value, result);
		    break;
		    
		case 2:
		    printf("Enter weight in Masha: ");
		    scanf("%f",&value);
		    result=mashaToratti(value);
		     printf("The %0.2f Masha = %0.2f Ratti",value,result);
		     break;
		    
		case 3:
		    printf("Enter weight in Masha: ");
		    scanf("%f",&value);
		    result=mashaTotola(value);
		     printf("The %0.2f Masha = %0.2f Tola",value,result);
		     break;
		
		case 4:
		    printf("Enter weight in Tola: ");
		    scanf("%f",&value);
		    result=tolaTomasha(value);
		     printf("The %0.2f Tola = %0.2f Masha",value,result);
		     break;
		    
		case 5:
		    printf("Enter weight in Tola: ");
		    scanf("%f",&value);
		    result=tolaToser(value);
		     printf("The %0.2f Tola = %0.2f Ser",value,result);
		     break;
		    
		case 6:
			printf("Enter weight in Ser: ");
		    scanf("%f",&value);
		    result=serTotola(value);
		     printf("The %0.2f Ser = %0.2f Tola",value,result);
		     break;
		     
		     default:
		     	printf("Wrong input\n Try Again");
		     	break;
		     
	   }
	}
	
	// Functions
}
float rattiTomasha(float x)
{
	return x/8;
}
float mashaToratti(float x)
{
	return x*8;
}
float mashaTotola(float x)
{
	return x/12;
}
float tolaTomasha(float x)
{
	return x*12;
}
float tolaToser(float x)
{
	return x/80;
}
float serTotola(float x)
{
	return x*80;
}
