#include<stdio.h>
int main()
{
	
	int b[]={0,0};
	char c;
	int stage=1;
	char goods;			 //goods��ʾ���� 
    int univalence;		 //univalence��ʾ���� 
	int channel;		 //channel��ʾͨ��
	int number;			 //number��ʾ�������
	int i;            	 //i��ʾ����Ͷ�ҽ�� 
	int money;        	 //money��ʾ�Ѿ�������ܽ�� 
	int amount;          //amount��ʾ��Ʒ�ܼ۸� 
	int need;			 //need��ʾ�˿����� 
	while(stage==1){
	printf ("����������������ࡢͨ����š����ﵥ���Լ��������:\n");
	
	scanf(" %c %d %d %d",&goods,&channel,&univalence,&number);
	while(getchar()!='\n');
	if(goods==65){
		b[1]=univalence;
    while(getchar()!='\n');
	} else if(goods==66){
		b[2]=univalence;
    while(getchar()!='\n')
	
	}
	printf("������y��ʼ�ڷţ�����n��ʼ����:\n");
	
	scanf("%c",&c);
	if (c=='y'){
		stage =1;
	}else if(c=='n'){
		break;
	}else {
		printf("ϵͳ��������������\n") ;//�����û�����Ĵ�����Ϣ 
		return 0;
	}
	}
	stage=2;
	while(stage==2){
	
	printf("��������Ҫ����Ļ����������ͨ���Լ���������:\n");
	scanf(" %c %d %d",&goods,&channel,&need) ;
	 while(getchar()!='\n');
	if(goods==65){
		amount+=need*b[1];
		 while(getchar()!='\n');
			
	}
	if(goods==66){
		amount+=need*b[2];
		 while(getchar()!='\n');
	}
	
	printf("Ҫ��Ҫ�����㣿\n");
	 printf("y or n\n") ;   //y����yes��n����no 
	scanf("%c",&c);
	if (c=='y'){
		stage=2;
	}else if(c=='n'){
		break;
	}else{
		printf("�������������ϵͳ��\n");
		return 0;
	}
}
	printf("ע��:ֻ������1Ԫ��2Ԫ��5Ԫ\n");
	for(money=0; money<amount;money=money+i){
		printf("�����뵥��Ͷ�ҽ�\n");
		scanf("%d",&i);
		while(getchar()!='\n');
	} 
	 while(getchar()!='\n');
	 int change=money-amount;
	 printf("����%dԪ\n",change);

	
	
	
	
	
	
	
	
	
	
	return 0;
}
