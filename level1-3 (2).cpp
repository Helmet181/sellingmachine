#include<stdio.h>

int main()
{
	int choice=1;                         //choice��ʾ�û��Ƿ�Ҫ�������� 
	char goods;							//goods��ʾ���� 
    int univalence;						//univalence��ʾ���� 
	int channel;						//channel��ʾͨ��
	int number; 						//number��ʾ����ڷŸ���
	char c;							
	while(choice==1){
	printf ("����������������ࡢͨ����š����ﵥ���Լ��������:\n");
	scanf("%c %d %d %d",&goods,&channel,&univalence,&number); 
	
	while(getchar()!='\n');                 //����һ�»����� 
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
	 printf("����%dԪ\n",change);
	 
	 printf("Ҫ��Ҫ�����㣿\n");
	 printf("y or n\n") ;   //y����yes��n����no 
	while(getchar()!='\n'); 
	scanf("%c",&c);
	if (c=='y'){
		choice=1;
		}
	else if(c=='n'){
		return 0;
	}
}
	
	     return 0; 
	} 
	 
	



