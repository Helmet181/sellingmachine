#include<stdio.h>
int main()
{
	char goods;
	int channel;
	int number;
	
	
	printf("ע�⣻ֻ������1Ԫ��2Ԫ��5Ԫ\n");
	int i;             //i��ʾ����Ͷ�ҽ�� 
	int money;         //money��ʾ�Ѿ�������ܽ�� 
	       //amount��ʾ��Ʒ�ܼ۸� 
	printf("��������Ҫ����Ļ����������ͨ���Լ���������:\n");
	scanf("%c %d %d",&goods,&channel,&number) ;
	int amount=number*7; 
	for(money=0; money<amount;money=money+i){
		printf("�����뵥��Ͷ�ҽ�\n");
		scanf("%d",&i);
	} 
	 int change=money-amount;
	 printf("����%dԪ",change);
	 return 0; 
}
