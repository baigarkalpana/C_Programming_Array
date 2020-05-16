/*
Author:Kalpana  Baigar

Accept N numbers from user and also accept anothe number return the index of
 last occurence of number.

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
   	   	   cnt=i;
             	   	  
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
	
	printf("\nenter number to check occurence");
	scanf("%d",&no);
	
    iret=	arrdisplay(p,isize,no);
	
    printf("\nindex of  number is: %d",iret);	
	
	
	
	
	
}
