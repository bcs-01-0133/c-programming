//c porogramme for student elegibility
/*
name:stephen ngugi
reg:bcs-01-0133/2026
date:27-05-2026
description:c programme for student elegibility
*/

#include <stdio.h>


int main(){
	
int attendance;
int averagemarks;

printf("enter the attendance");
scanf("%d",&attendance);

printf("enter averagemarks");
scanf("%d",&averagemarks);

if (attendance >=75 && averagemarks>=40){
 
	printf("eligible");
	}
	
	else{
	printf("notelegible");
	
}
//display elegibility

printf("\n enter attendane:%d\n",attendance);
printf("\n enter averagemarks:%d\n",averagemarks);

return 0;
}