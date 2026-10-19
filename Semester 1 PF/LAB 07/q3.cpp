#include <stdio.h>
int main(){
	char fname[12], lname[12], flname[24];
	printf("Enter first name: ");
	scanf("%10s", fname);
	printf("Enter last name: ");
	scanf("%10s", lname);
	
	int k = 0;
	
	for(int i = 0; fname[i] != '\0'; i++){
		flname[k++] = fname[i];
	}
	flname[k++] = ' ';
	for(int i =0; lname[i] != '\0'; i++){
		flname[k++] = lname[i];
	}
	printf("\nFull name is %s and total characters are %d", flname, k-1);
	return 0;
}
