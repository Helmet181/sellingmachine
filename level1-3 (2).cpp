#include<stdio.h>

int main()
{

	char goods;							//goods��ʾ���� 
    int univalence;						//univalence��ʾ���� 
	int channel;						//channel��ʾͨ��
	int number;							//number��ʾ����ڷŸ���
	printf ("����������������ࡢͨ����š����ﵥ���Լ��������:\n");
	scanf("%c %d %d %d",&goods,&channel,&univalence,&number); 
	
	while(getchar()!='\n'); 
	int umbrella;							//umbrella��ʾ��Ҫ�򼸸� 
	
	printf("��������Ҫ����Ļ����������ͨ���Լ���������:\n");
	scanf("%c %d %d",&goods,&channel,&umbrella) ;

	int i;            					 //i��ʾ����Ͷ�ҽ�� 
	int money;        					 //money��ʾ�Ѿ�������ܽ�� 
	int amount= umbrella* univalence;          //amount��ʾ��Ʒ�ܼ۸� 
	printf("ע��:ֻ������1Ԫ��2Ԫ��5Ԫ\n");
	for(money=0; money<amount;money=money+i){
		printf("�����뵥��Ͷ�ҽ�\n");
		scanf("%d",&i);
	} 
	 int change=money-amount;
	 printf("����%dԪ",change);
	 return 0; 
}
