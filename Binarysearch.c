#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 28
int sort(int b[]);
int main()
{
    int a[size],i,key;
    srand(time(NULL));
    for(i=0; i<28; i++)
    {
     a[i] = rand()%100;

    }
    printf("**********\n Before Sorting\n ***********");
    for(i=0; i<28; i++)
    {
     printf("[%d] : %d\n",i,a[i]);
    }
    printf("**********\n After Sorting\n *************");
    sort(a);
    for(i=0; i<28; i++)
    {
     printf("[%d] : %d\n",i,a[i]);
    }
    printf("Enter a value which you want to search(1-100)");
    scanf("%d",&key);
    binarysearch(a, key);

return 0;
}
    int sort(int b[])
    {
        int pass,j,hold;
        for(pass=1;pass<size;pass++)
        {
            for(j=0;j<size-1;j++)
            if (b[j]>b[j+1])
            {
                hold=b[j];
                b[j]=b[j+1];
                b[j+1]=hold;
            }
        }

    }


    int binarysearch(int c[], int key)
    {
        int middle,lower=0,upper=27;
        middle=(upper+lower)/2;
        while(lower<=upper)
		{
			if(c[middle]<key)
				lower = middle + 1;
			else if(c[middle]==key)
			{
				printf("%d found at index %d", key, middle);
				break;
			}
			else
			 	upper = middle - 1;
			
			middle = (lower+upper)/2;
		}
		if(lower>upper)
			printf("Not found!");

    }
