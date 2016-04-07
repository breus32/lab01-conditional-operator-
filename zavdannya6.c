#include <stdio.h>

int main() {
	
	int a;
	
	printf("Nomer mesyatsa");
	scanf("%d", &a);
	if ((a <= 2) && (a >= 1)) {
		printf("\nZima");
	} else {
		if (a == 12) {
			printf("\nZima.");
		} else {
			if ((a >= 3) && (a <= 5)) {
				printf("\nVesna.");
			} else {
				if ((a >= 6) && (a <= 8)) {
					printf("\nLeto.");
				} else {
					if ((a >= 9) && (a <= 11)) {
						printf("\nOsen.");
					} else {
						if (a > 12) {
							printf ("\nOwibka.");
						}
					}
				}
			}
		}
	}
	return 0;
}
