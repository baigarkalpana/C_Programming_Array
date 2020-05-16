/*
Author:Kalpana  Baigar

Accept N numbers from user and also accept the range and print the numbers in dat range only.

*/


#include<stdio.h>
#include<malloc.h>



void arrdisplay(int arr[],int size ,int istart,int iend)
{  
   int i;
   
   for(i=0;i<=size;i++)
   {
   	   if(arr[i]>=istart && arr[i]<=iend)
   	   {
   	   	   
            printf("\n%d ",arr[i]); 	   	  
       }
   }
   
}


int main(void)
{
	int isize=0,i=0,no=0,start=0,end=0;
	int *p=NULL;
	
	
	printf("enter size of array");
	scanf("%d",&isize);
	
    p=(int *)malloc(isize * sizeof (int));
	if(p==NULL)
	{
	   printf("\nmemory not allocated\n");	
	}	 
	else
	{
		 printf("memory allocated\n");	
	}
	
	printf("\n\nenter starting range:");
	scanf("%d",&start);
	
	printf("\nenter ending range:");
	scanf("%d",&end);
	
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
	
	
	
  	arrdisplay(p,isize,start,end);
	
	
	
	
	
	
}
