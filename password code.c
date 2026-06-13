#include<stdio.h>

int main(){
	
	/*
	name:stephenngugi
	reg:BCS-01-0133/2026
	Description:entering password
	date:13-6-2026
	*/
	
	int password;
	
	do{
			printf("enter password");
			scanf("%d",&password);
		
		if(password>1234){
			printf("try again\n");
		}
		else if(password<1234){
			printf("try again\n");
			
		}
		else if(password==1234){
			printf("access granted");
		}
		}
		
		while(password==1234);
	
		return 0;
}