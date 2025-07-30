#include<stdio.h>
#include<string.h>
struct City
{
	int temperature;
	char city_name[100];
};
void display(struct City city)
{
	printf("\nCity Name is: %s", city.city_name);
	printf("\nTemperature in city is: %d Celsius", city.temperature);
}
int main()
{
	struct City city;
	printf("Enter the name of the city: ");
	scanf("%s", city.city_name);
	printf("Enter the temperature of the city in Celsius: ");
	scanf("%d", &city.temperature);
	display(city);
	return 0;
}
