#include <stdio.h>
int main(){
	float calories, fatGrams, CalFat;
	printf("Please enter number of calories and fat grams in a food\n");
	scanf("%f %f", &calories, &fatGrams);
	
	CalFat = fatGrams * 9;
	
	if (calories < 0 || fatGrams < 0){
		printf("Invalid, make sure Values are not negative");
		return 1;
	} else if (CalFat > calories){
		printf("Either the calories or fat grams were incorrectly entered.");
	} else {
		printf("food has %.2f%% of calories that come from fat\n", CalFat/calories*100);
		if (CalFat < 0.3*calories){
		printf("food is low in fat");
		}
	} return 0;		
}
