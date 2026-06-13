#include<stdio.h>

/*
name:stephenngugi
reg:BCS-01-0133/2026
description:guessing game
date:13-06-2026
*/

int main(){
	
	int number;
	printf("enter number");
	scanf("%d",&number);
	
	int secret=12;
	
	while(secret<=12)
		secret++;

if(number>secret){
	printf("too high");
}
	else if(number <secret){
	printf("too low");
	}
else if("number=secret number"){
printf("correct");
}
	
	return 0;
}