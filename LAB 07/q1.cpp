#include <stdio.h>
int main(){
	int sum = 0, numsSize, count = 0;
	float avg;
	printf("How many numbers do you want to enter: ");
	scanf("%d", &numsSize);
	int nums[numsSize];
	
	for(int i = 0; i < numsSize; i++){
		printf("Enter number %d: ", i+1);
		scanf("%d", &nums[i]);
		if (nums[i]>0){
			sum += nums[i]; count++;
		}
	}
	avg = sum/(float)count;
	printf("Sum of positive numbers enterred is %d and average is %.1f", sum, avg);
	return 0;
}
