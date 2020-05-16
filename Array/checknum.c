/*
Author:Kalpana  Baigar

Accept N numbers from user and also accept anothe number return the frequency of that number.

*/


#include<stdio.h>
#include<malloc.h>



int arrdisplay(int arr[],int size ,int num)
{  
   int i,cnt=0;
   for(i=0;i<=size;i++)
   {
   	   if(arr[i]==num)
   	   {
           cnt++;   	   	  
       }
   }
   return cnt;
}


int main(void)
{
	int isize=0,i=0,iret=0,no=0;
	int *p=NULL;
	
	
	printf("enter size of array");
	scanf("%d",&isize);
	printf("enter number");
	scanf("%d",&no);
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
	
  iret=	arrdisplay(p,isize,no);
	
 printf("\nfrequency of  number is: %d",iret);	
	
	
	
	
	
}
