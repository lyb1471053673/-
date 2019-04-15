#include<stdio.h>
#include<string.h>
struct Book{
char ISBN[14];
   char Name[20];
   double Price;
   char Author[20];
   char publish[30];
   struct Book *next;
};
void xs(struct Book *b)
{
	if(b!=NULL)
	{
		printf("编号\t书名\t\t价格\t作者\t出版社\n");
		printf("%s\t%s\t%.2f\t%s\t%s\n",b->ISBN,b->Name,b->Price,b->Author,b->publish);
		printf("-------------------------\n");
		xs(b->next);
	}
}
void main()
{
	struct Book *head,*p,*q,b1,b2,b3;
	char inname[20];
	int fine=0;
	strcpy(b1.ISBN,"1001");
	strcpy(b2.ISBN,"1002");
	strcpy(b3.ISBN,"1003");
	strcpy(b1.Name,"C语言程序设计");
	strcpy(b2.Name,"数据结构");
	strcpy(b3.Name,"计算机网络");
	b1.Price=33.00;
	b2.Price=27.00;
    b3.Price=29.00;
    strcpy(b1.Author,"谭浩强");
    strcpy(b2.Author,"严巍敏");
    strcpy(b3.Author,"谢希仁");
    strcpy(b1.publish,"清华大学出版社");
    strcpy(b2.publish,"清华大学出版社");
    strcpy(b3.publish,"电子工业出版社");
    b1.next=&b2;
    b2.next=&b3;
    b3.next=NULL;
    head=&b1;
    xs(head);
    printf("请输入要删除的图书名称:");
    scanf("%s",inname);
    p=head;
    q=head;
    while(p!=NULL){
    	if(!strcmp(p->Name,inname)){
    		if(p==q){
    			head=head->next;
    			fine=1;
			}else{
				q->next=p->next;
				fine=1;
			}
			break;
		}
		    q=p;
    	    p=p->next;
	}
	if(fine){
		printf("--删除成功--\n");
	}else{
		printf("--没有找到该图书--\n");
	}
	xs(head);
	
}
