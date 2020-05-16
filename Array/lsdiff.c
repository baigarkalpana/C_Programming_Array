/*
Author:Kalpana  Baigar

Accept N numbers from user and return the difference of smallest and largest number

*/


#include<stdio.h>
#include<malloc.h>



int arrdisplay(int arr[],int size)
{  
   int ret=0,i,min=0,max=0,a;
   min=arr[0];
   for(i=0;i<=size;i++)
   {
   	 if(arr[i]<min)
   	 {
   	    min=arr[i];	
	 }
   	  
    }
   
    for(i=0;i<=size;i++)
   {
   	 if(arr[i]>max)
   	 {
   	    max=arr[i];	
	 }
   	  
   	
   	  
   }
 
 printf("\nmax is:%d",max);
 printf("\nmin is %d",min);
 
 a=max-min;
 return a ;
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

    printf("\ndifference of largest and smallest number of an array is:%d",iret);   	
	
	
	
	
	
	
}
