//c programming water bill
/*
date:30/05/2026
name:stephen ngugi
reg:bcs-01-0133/2026
description:c programme for water bill
*/
#include <stdio.h>

int main(){

	int units;
	int total_bill;
 char name[14];
	
	printf("enterunits");
	scanf("%d",&units);
	
	
	
	printf("entername");
	scanf("%s",&name);
	
	if(units<=30){
		total_bill=units*25;
    
	}
	 else if(units<=60){
     total_bill=units*25;
	 }
     else {
     total_bill=units*30;
	 }
		
// display results

printf(" enter units :%d\n",name);
printf(" entername:%s\n",name);	
printf(" total_bill:%d\n",total_bill);
	
	return 0;
}