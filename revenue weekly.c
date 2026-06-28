#include<stdio.h>

/*
name:stephen ngugi
adm:bcs-01-0133/2026
date:28-06-2026
description: weekly revenue tracker
*/

int main(){
	
	int week;
	int day;
	int revenue=0;
	
	for(week=1; week<2; week++){
		printf(" week %d\n", week);
	}
		for(day=1;  day<=7; day++){
		
		printf("day %d \n", day);
		}
	
		for(revenue=1; revenue<8; revenue++){
		printf("revenue %d\n", revenue);
		}
	
		int sum=0;
		sum=sum+revenue;
		printf("%d\n", sum);
		
	return 0;
}