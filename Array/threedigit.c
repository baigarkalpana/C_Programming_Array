/*4
Author:Kalpana  Baigar

Accept N numbers from user and display the numbers which are three digits

*/


#include<stdio.h>
#include<malloc.h>



void arrdisplay(int arr[],int size)
{  
   int i,num=0,cnt=0,temp=0,digit=0;
   
   for(i=0;i<=size;i++)
   {
   	   num=arr[i];
   	   temp=num;
   	   cnt=0;
	    
  		while(num!=0)
	   	 {
	   	    digit=num%10;
			cnt++; 
			num=num/10;  	
		 }
	   	if(cnt==3)
	     {
	     	printf("%d  ",temp);	
	   	 }
      	
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
