#include<stdio.h>
int main()
{
	int x;
	double sum=0;
	int cnt=0;
	int number[100];
    printf("��������Ҫ��ƽ�������������֣�");
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
		printf("��������ƽ����Ϊ:%f\n",average);
		for(i=0;i<cnt;i++){
			if(number[i]>average){
				printf("���д���ƽ�����������У�%d",number[i]);
			}
		}
	}
	return 0;
}