#include <stdio.h>
int main(){
	int num1, num2, temp;
	printf("enter two numbers: \n");
	scanf("%d%d", &num1, &num2);
	printf("1st number is %d and 2nd number is %d before swap\n", num1, num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("Now, 1st number is %d and 2nd number is %d after swap\n", num1, num2);
	return 0;
}
