#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10
int sort(int b[]);
int main()
{
    int a[size],i;
    srand(time(NULL));
    for(i=0; i<10; i++)
    {
     a[i] = rand()%100;

    }
    printf(" **********\n Before Sorting\n *************\n");
    for(i=0; i<10; i++)
    {
     printf("[%d] : %d\n",i,a[i]);
    }
    printf(" **********\n After Sorting\n *************\n");
    sort(a);
    for(i=0; i<10; i++)
    {
     printf("[%d] : %d\n",i,a[i]);
    }
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


