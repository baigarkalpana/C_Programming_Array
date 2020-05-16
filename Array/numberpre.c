/*
Author:Kalpana  Baigar

Accept N numbers from user and check wether 11 is present is not

*/


#include<stdio.h>
#include<malloc.h>
#include <stdbool.h> 




bool arrdisplay(int arr[],int size)
{  
   int i,num=11;
   for(i=0;i<=size;i++)
   {
   	   if(arr[i]==num)
   	   {
          return true;
          break;
       }
   }
}


int main(void)
{
	int isize=0,i=0,iret=0;
	int *p=NULL;
	bool bret;
	
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
	
  	bret=arrdisplay(p,isize);
	if(bret==true)
	{
		printf("\n11 is present");
	}
	else
	{
		printf("11 is not present");
	}
	
	
	
	
}
