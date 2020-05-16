/*
Author:Kalpana  Baigar

Accept N numbers from user and display the summation of the digits of that numbers

*/


#include<stdio.h>
#include<malloc.h>



void arrdisplay(int arr[],int size)
{  
   int i,num=0,sum=0,digit=0,temp;
   
   for(i=0;i<=size;i++)
   {
   	   num=arr[i];
   	   temp=num;
   	   sum=0;
	    
  		while(num!=0)
	   	 {
	   	    digit=num%10;
		    sum=sum+digit;
			num=num/10;  	
		 }
	    printf("\nsummation of %d is : %d  ",temp,sum);
      	
   }
   
    
   
 
 
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
