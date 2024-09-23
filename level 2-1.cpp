#include<stdio.h>
int main()
{
	
	int b[]={0,0};
	char c;
	int stage=1;
	char goods;			 //goods表示货物 
    int univalence;		 //univalence表示单价 
	int channel;		 //channel表示通道
	int number;			 //number表示货物个数
	int i;            	 //i表示单次投币金额 
	int money;        	 //money表示已经输入的总金额 
	int amount;          //amount表示商品总价格 
	int need;			 //need表示顾客需求 
	while(stage==1){
	printf ("请依次输入货物种类、通道编号、货物单价以及货物个数:\n");
	
	scanf(" %c %d %d %d",&goods,&channel,&univalence,&number);
	while(getchar()!='\n');
	if(goods==65){
		b[1]=univalence;
    while(getchar()!='\n');
	} else if(goods==66){
		b[2]=univalence;
    while(getchar()!='\n')
	
	}
	printf("请输入y开始摆放，输入n开始购买:\n");
	
	scanf("%c",&c);
	if (c=='y'){
		stage =1;
	}else if(c=='n'){
		break;
	}else {
		printf("系统错误，请重启程序。\n") ;//处理用户输入的错误信息 
		return 0;
	}
	}
	stage=2;
	while(stage==2){
	
	printf("请输入需要购买的货物、货物所在通道以及购买数量:\n");
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
	
	printf("要不要再来点？\n");
	 printf("y or n\n") ;   //y代表yes，n代表no 
	scanf("%c",&c);
	if (c=='y'){
		stage=2;
	}else if(c=='n'){
		break;
	}else{
		printf("输入错误，请重启系统。\n");
		return 0;
	}
}
	printf("注意:只能输入1元、2元和5元\n");
	for(money=0; money<amount;money=money+i){
		printf("请输入单次投币金额；\n");
		scanf("%d",&i);
		while(getchar()!='\n');
	} 
	 while(getchar()!='\n');
	 int change=money-amount;
	 printf("找零%d元\n",change);

	
	
	
	
	
	
	
	
	
	
	return 0;
}
