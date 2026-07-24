#include<stdio.h>

int main(){
	int gastype;
	int batch_no=0;
	int price=0;
	float unit=0;
	char name[10];

	printf("enter gas type");
	scanf("%d",&gastype);

		printf("enter batch_no\n");
	scanf("%d",batch_no);

		printf("enter price\n");
	scanf("%d",&price);

		printf("enter unit\n");
	scanf("%f",&unit);

		printf("enter name[10]\n");
	scanf("%c",&name[10]);


	return 0;
}
