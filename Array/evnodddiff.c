/*
Author:Kalpana  Baigar

Accept array  from user and return difference of summation of even and odd elements in an array

*/


#include<stdio.h>
#include<malloc.h>



int arrdisplay(int arr[],int size)
{  
   int sumevn=0,sumodd=0,i;
   for(i=0;i<=size;i++)
   {
   	   if(arr[i]%2==0)
   	   {
   	      sumevn=sumevn+arr[i];	  
    }
	   else
	   {
	   	  sumodd=sumodd+arr[i];	  
	   }
   }
	return sumevn-sumodd;
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
	
	printf("\ndiffernce of summation of even and odd elements is: %d",iret);
	
	
	
	
	
	
}
