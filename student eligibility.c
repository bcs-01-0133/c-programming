//c porogramme for student elegibility
#include<stdio.h>

int main(){
float attendance;
float averagemarks;

printf("enter the attendance");
scanf("%f",&attendance);

printf("enter average marks");
scanf("%d",averagemarks);

if (attendance >=75 && averagemarks>=40){
 
	printf("eligible");
	}
	
	else{
	printf("noteligible");
	
}

return 0;
}