#include <stdio.h>

int main() {

    int temp_fahreheint;
    int temp_celcius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &temp_fahreheint);

    temp_celcius = (temp_fahreheint - 32) * 5 / 9;

    printf("Temperature in Celsius: %d\n", temp_celcius);

    return 0;
}