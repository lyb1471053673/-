#include<stdio.h>
int main()
{
	float pi=3.14159f,area;
	int r;
	for(r=1;r<=10;r++){
		area=pi*r*r;
		if(area>100)
		  break;
		printf("r=%d,area=%f\n",r,area);
	}
	return 0;
 } 
