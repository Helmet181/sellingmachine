#include<stdio.h>
int main()
{
	char goods;//goods��ʾ���� 
    int univalence;//univalence��ʾ���� 
	int channel;//channel��ʾͨ��
	int amount;//amount��ʾ�������
	printf ("����������������ࡢͨ����š����ﵥ���Լ��������:\n");
	scanf("%c %d %d %d",&goods,&channel,&univalence,&amount); 
	printf("%d: ",channel);
	int i;
	for(i=0;i<amount;i++){
		printf("%c",goods);
	}
	printf(" %d",univalence);
	
	
	
	
	
	
	return 0;
 } 
