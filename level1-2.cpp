#include<stdio.h>
int main()
{
	char goods;
	int channel;
	int number;
	
	
	printf("注意；只能输入1元、2元和5元\n");
	int i;             //i表示单次投币金额 
	int money;         //money表示已经输入的总金额 
	       //amount表示商品总价格 
	printf("请输入需要购买的货物、货物所在通道以及购买数量:\n");
	scanf("%c %d %d",&goods,&channel,&number) ;
	int amount=number*7; 
	for(money=0; money<amount;money=money+i){
		printf("请输入单次投币金额；\n");
		scanf("%d",&i);
	} 
	 int change=money-amount;
	 printf("找零%d元",change);
	 return 0; 
}
