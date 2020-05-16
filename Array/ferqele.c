/*
Author:Kalpana  Baigar

Accept N numbers from user and return the frequency of 11.

*/


#include<stdio.h>
#include<malloc.h>



int arrdisplay(int arr[],int size)
{  
   int i,cnt=0,num=11;
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
	
  iret=	arrdisplay(p,isize);
	
 printf("\nfrequency of 11 number is: %d",iret);	
	
	
	
	
	
}
