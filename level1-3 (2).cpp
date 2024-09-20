#include<stdio.h>

int main()
{
	int choice=1;                         //choice表示用户是否要继续购买 
	char goods;							//goods表示货物 
    int univalence;						//univalence表示单价 
	int channel;						//channel表示通道
	int number; 						//number表示货物摆放个数
	char c;							
	while(choice==1){
	printf ("请依次输入货物种类、通道编号、货物单价以及货物个数:\n");
	scanf("%c %d %d %d",&goods,&channel,&univalence,&number); 
	
	while(getchar()!='\n');                 //清理一下缓冲区 
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
	 printf("找零%d元\n",change);
	 
	 printf("要不要再来点？\n");
	 printf("y or n\n") ;   //y代表yes，n代表no 
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
	 
	



