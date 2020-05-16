/*
Author:Kalpana  Baigar

Accept N numbers from user and display all such elements which are multiples of 11

*/


#include<stdio.h>
#include<malloc.h>



void arrdisplay(int arr[],int size)
{  
   int sumevn=0,sumodd=0,i;
   for(i=0;i<=size;i++)
   {
   	   if(arr[i]%11==0)
   	   {
   	   	   printf("\n%d",arr[i]);
   	   	  
       }
   }
   
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
	
	arrdisplay(p,isize);
	
	
	
	
	
	
	
}
