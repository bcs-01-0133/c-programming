/*
name:stephen ngugi
reg no:BCS-01-0133/2026
date:1-07-2026
description:vehicle registration
*/

#include<stdio.h>
#include<string.h>

struct vehicle{

	int reg_no;
	char vehicle_model[50];
	char manufacturer[50];
	int year;
	int daily_charge;	
};

int main(){
	
	struct vehicle vehicle1;
	
	strcpy(vehicle1.vehicle_model,"enter vehicle_model");
	strcpy(vehicle1.manufacturer,"enter vahicle1 manufacturer");
	
	vehicle1.reg_no;"enter vehicle1 reg_no";
	vehicle1.year;"enter vehicle1 year";
	vehicle1.daily_charge;"enter vehicle1 daily_charge";
	
	printf("reg_no:%d\n",vehicle1.reg_no);
	printf("vehicle_model:%c\n",vehicle1.vehicle_model);
	printf("manufacture:%c\n",vehicle1.manufacturer);
	printf("year:%d\n",vehicle1.year);
	printf("daily_charge:%d\n",vehicle1.daily_charge);
	
	return 0;
	
}