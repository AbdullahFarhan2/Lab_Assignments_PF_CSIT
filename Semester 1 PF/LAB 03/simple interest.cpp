#include <stdio.h>
int main(){
	float P, R, T, SI;
	printf("Enter Principal in Rs, then Rate Of Interest in %%, and then Time Period in years.\n");
	printf("Values should be in ranges \"100-1,000,000\", \"5-10\", \"1-10\" respectively.\n");
	scanf("%f %f %f", &P, &R, &T);
	if (P >= 100 && P <= 1000000 && R >= 5 && R <=10 && T >=1 && T <= 10){
		SI = (P*R*T)/100;
		printf("Simple interest for your principal with provided details is: %0.2f\n", SI);
		return 0;
	} else {
		printf("Invalid Inputs");
		return 1;
	}
}
