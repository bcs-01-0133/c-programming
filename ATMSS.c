#include<stdio.h>

/*
name:stephenngugi
reg:bcs-01-0133/2026
description:ATM
date:13-01-0133/2026
*/

int main(){
	
	int i=5000;
	int pin;

	int withdraw=250;
	
	
	printf("enter pin");
	scanf("%d",&pin);
	
	
	printf("enter i");
scanf("%d",&i);



if(i<=0){
	printf("insufficient funds");
}
	else if(i>5000){
		printf("insufficient funds");
	}
	else if(i<=5000);
	printf("withdraw success");


         int balance=1000;
         balance=i-withdraw;
         printf("%d=%d-%d",balance,i,withdraw);
         
         while(i==5000);

	
return 0;	
}

