#include <stdio.h>
int main() {
    // Printing \a five times to play the beep sound 5 times
    printf("beep 1\a\npress enter to hear another beep");
    getchar(); // using getchar (), Pausing to let you hear each beep separately 
    printf("beep 2\a\npress enter to hear another beep");
    getchar();
	printf("beep 3\a\npress enter to hear another beep");
    getchar();
	printf("beep 4\a\npress enter to hear another beep");
    getchar();
	printf("beep 5\a\nthese were 5 beeps.");
    return 0;
}
