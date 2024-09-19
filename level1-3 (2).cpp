#include<stdio.h>

int main()
{

	char goods;							//goods表示货物 
    int univalence;						//univalence表示单价 
	int channel;						//channel表示通道
	int number;							//number表示货物摆放个数
	printf ("请依次输入货物种类、通道编号、货物单价以及货物个数:\n");
	scanf("%c %d %d %d",&goods,&channel,&univalence,&number); 
	
	while(getchar()!='\n'); 
	int umbrella;							//umbrella表示需要买几个 
	
	printf("请输入需要购买的货物、货物所在通道以及购买数量:\n");
	scanf("%c %d %d",&goods,&channel,&umbrella) ;

	int i;            					 //i表示单次投币金额 
	int money;        					 //money表示已经输入的总金额 
	int amount= umbrella* univalence;          //amount表示商品总价格 
	printf("注意:只能输入1元、2元和5元\n");
	for(money=0; money<amount;money=money+i){
		printf("请输入单次投币金额；\n");
		scanf("%d",&i);
	} 
	 int change=money-amount;
	 printf("找零%d元",change);
	 return 0; 
}
