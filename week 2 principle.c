#include <stdio.h>
/*
name:stephen ngugi
adm:bcs-01-0133/2026
*/

int amin(){
	
	int time;
	int rate;
	int principle;
	int amount;
	
	printf("enter time\n");
	scanf("%d",&time);
	
		printf("enter rate\n");
	scanf("%d",&rate);
	
		printf("enter principle");
	scanf("%d",&principle);
	
	amount=(principle*time*rate)/100;
	
	printf("time:%d\n",time);
	printf("rate:%d\n",rate);
	printf("principle:%d\n",principle);
	printf("amount:%d\n",amount);
	
	
	return 0;
}
