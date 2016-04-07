#include <stdio.h>

int main() {
	
	int a;
	
	printf("Vvedite vremya:");
	scanf("%d", &a);
	if ((a >= 5)&&(a <= 10)){
		printf("\nDobroe utro.");
	} else {
	if ((a >= 12)&&(a <= 18)) {
		printf("\nDobriy den.");
	} else {
	if ((a >= 19)&&(a <= 24)){
		printf("\nDobriy ve4er.");
	} else {
	if ((a >= 0)&&(a <= 5)) {
		printf("\nSpokoinoy no4i.");
				}
			}
		}
	}
	return 0;
}
