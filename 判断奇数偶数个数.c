#include<stdio.h>
int main()
{
	int i;
	int count1=0,count2=0; 
    scanf("%d",&i);
    while(i!=-1){
	if(i%2==0){
	   count1=count1+1;
	}else{
	   count2=count2+1;	
 	}
 	printf("%d %d",count1,count2);
   }
	return 0;
} 
