/*
Author:Kalpana  Baigar

Accept N numbers from user and product of all odd elements

*/


#include<stdio.h>
#include<malloc.h>



void arrdisplay(int arr[],int size)
{  
   int mult=1,i;
   for(i=0;i<=size;i++)
   {
   	   if((arr[i]%2!=0))
   	   {
           mult=mult*arr[i];   	   	  
       }
       
       
   }
   

   printf("\n multiplication of odd elements is:%d",mult);
}


int main(void)
{
	int isize=0,i=0;
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
	
	arrdisplay(p,isize);
	
	
	
	
	
	
	
}
