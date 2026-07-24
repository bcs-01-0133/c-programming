
#include <stdio.h>
int main(){
	
int attendance;
int averagemarks;

printf("enter the attendance");
scanf("%d",&attendance);

printf("enter averagemarks");
scanf("%d",&averagemarks);

if (attendance >=75 && averagemarks>=40){
 
	printf("eligible\n");
	}
	
	else{
	printf("notelegible\n");
	}



return 0;
}