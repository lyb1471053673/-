#include<stdio.h>
int main()
{ 
    int x;
	//scnf("%d",&x);
	for(x=2;x<100;x++)
	{
	   int i; 
	   int isPrime=1;     //x������ 
	   for(i=2;i<x;i++){
	    	if(x%i==0){
		      isPrime=0;
			  break;	
		    }
	    } 
	    if(isPrime==1){
		   printf("%d ",x);
        }
	}
	printf("\n");
	return 0;
 } 
