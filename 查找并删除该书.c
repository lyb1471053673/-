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
		printf("���\t����\t\t�۸�\t����\t������\n");
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
	strcpy(b1.Name,"C���Գ������");
	strcpy(b2.Name,"���ݽṹ");
	strcpy(b3.Name,"���������");
	b1.Price=33.00;
	b2.Price=27.00;
    b3.Price=29.00;
    strcpy(b1.Author,"̷��ǿ");
    strcpy(b2.Author,"��Ρ��");
    strcpy(b3.Author,"лϣ��");
    strcpy(b1.publish,"�廪��ѧ������");
    strcpy(b2.publish,"�廪��ѧ������");
    strcpy(b3.publish,"���ӹ�ҵ������");
    b1.next=&b2;
    b2.next=&b3;
    b3.next=NULL;
    head=&b1;
    xs(head);
    printf("������Ҫɾ����ͼ������:");
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
		printf("--ɾ���ɹ�--\n");
	}else{
		printf("--û���ҵ���ͼ��--\n");
	}
	xs(head);
	
}
