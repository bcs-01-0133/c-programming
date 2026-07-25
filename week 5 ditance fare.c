//c program to calculate the fare as per the distance
/*
name:stephen ngugi
adm:bcs-01-0133/2026
*/
#include<stdio.h>

int main(){
	
	int distance_km;
	int fare;
	
	printf("enter distance_km\n");
	scanf("%d",&distance_km);
	
	fare=50*distance_km;
	
	printf("distance_km:%d\n",distance_km);
	printf("fare:%d\n",fare);
	
	return 0;
}