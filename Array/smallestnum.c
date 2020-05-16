/*
Author:Kalpana  Baigar

Accept N numbers from user and return the smallest number

*/


#include<stdio.h>
#include<malloc.h>



int arrdisplay(int arr[],int size)
{  
   int i,min=0;
   min=arr[0];
   for(i=0;i<=size;i++)
   {
   	 if(arr[i]<min)
   	 {
   	    min=arr[i];	
	 }
   	  
   }
   return min;
}


int main(void)
{
	int isize=0,i=0,iret=0;
	int *p=NULL;
	
	
	printf("enter size of array");
	scanf("%d",&isize);
    p=(int *)malloc(isize * sizeof (int));
	if(p==NULL)
	{
	   printf("memory not allocated\n");	
	}	 
	else
	{
		 printf("memory allocated\n");	
	}
	
	printf("enter elements\n");
	
	for(i=0;i<=isize;i++)
	{
		scanf("%d",&p[i]);
		
	}
	
	
	printf("your entered elements are:");
	
	for(i=0;i<=isize;i++)
	{
		printf("%d ",p[i]);
		
	}
	
    iret=arrdisplay(p,isize);

    printf("\nsmallest number in an array is:%d",iret);   	
	
	
	
	
	
	
}
