#include<stdio.h>
int main()
{
	int x;
	double sum=0;
	int cnt=0;
	int number[100];
    printf("请输入你要求平均数的所有数字：");
	scanf("%d",&x);
	while(x!=-1){
		number[cnt]=x;
		sum+=x;
		cnt++;
		scanf("%d",&x);
	}
	if(cnt>0){
		int i;
		double average=sum/cnt;
		printf("所求数字平均数为:%f\n",average);
		for(i=0;i<cnt;i++){
			if(number[i]>average){
				printf("所有大于平均数的数字有：%d",number[i]);
			}
		}
	}
	return 0;
}