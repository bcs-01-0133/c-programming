#include <stdio.h>

int main(){

    int units;
    int total;

    printf("Enter units: ");
    scanf("%d", &units);

    if(units <= 100){
        total = units * 10;
    
    }
    else if(units<=200){
        total=units*15;
    }
    else if(units>200){
		total= units*20;
	}
    printf("Total: %d\n", total);
    return 0;
}