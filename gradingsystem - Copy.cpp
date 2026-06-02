// c programme for grading system
#include<stdio.h>
/*
name:stephen ngugi;
reg no:BCS-01-0133/2026;
date:01/06/2026;
*/

int main(){
	char name [20];
	int admission_number;
	int mark;
	
	printf("enter name[20]");
	scanf("%s",&name[20]);
	
	printf("enter admission_number");
	scanf("%d",&admission_number);
	
	printf("enter marks");
	scanf("%d",&mark);
	
	if(mark<=30){
		printf("E");
	}
	else if(mark<=40){
	printf("D");
	}
    else if(mark<=50){
     printf("C");
}
    else if(mark<=60){
		printf("B-");
	}
     else if(mark<=70){
	printf("B");
}
	else if(mark>70){
		printf("A");
	}
	
	return 0;
}