#include<stdio.h>
int main()
{
	char goods;//goods表示货物 
    int univalence;//univalence表示单价 
	int channel;//channel表示通道
	int amount;//amount表示货物个数
	printf ("请依次输入货物种类、通道编号、货物单价以及货物个数:\n");
	scanf("%c %d %d %d",&goods,&channel,&univalence,&amount); 
	printf("%d: ",channel);
	int i;
	for(i=0;i<amount;i++){
		printf("%c",goods);
	}
	printf(" %d",univalence);
	
	
	
	
	
	
	return 0;
 } 
