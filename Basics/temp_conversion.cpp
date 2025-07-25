#include<stdio.h>
int main()
{
	float celsius, fahrenheit;
	printf("Enter the temperature in celsius: ");
	scanf("%f", &celsius);
	fahrenheit = (celsius*9/5)+32;
	printf("Temperature in fahrenheit is: %.2f", fahrenheit);
	printf("\nEnter the temperature in fahrenheit: ");
	scanf("%f", &fahrenheit);
	celsius = (5/9)*(fahrenheit-32);
	printf("Temperature in celsius is: %.2f", celsius);
	return 0;
}
