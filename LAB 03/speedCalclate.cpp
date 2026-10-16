#include <stdio.h>
int main(){
	float hour, distance, speed;
	printf("Enter car travel time(hour) and then the distance(miles) car coverred\n");
	printf("NOte: Time should be between 1-5 hours, and distance enterred must be +ve\n");
	scanf("%f%f", &hour, &distance);
	if (hour >= 1 && hour <= 5 && distance >= 0){
		speed = distance/hour;
		printf("the Avg. speed of car: %0.2f mph\n", speed);
		return 0;
	} else {
		printf("Invalid Input(s)");
		return 1;
	}
}
