#include <stdio.h>

int main ()
{
	int a, b, c;
	
	printf("Vvedite a:");
	scanf("%d", a);
	printf("Vvedite b:");
	scanf("%d", b);
	printf("Vvedite c:");
	scanf("%d", c);
	
	if ((a > b)&&(a > c)) {
		printf("\nNaibolshee 4islo: %d", a);
		} else {
			if ((b > a)&&(b > c)) {
				printf("\nNaibolshee 4islo: %d", b);
			} else {
				if ((c > a)&&(c > b)) {
					printf("\nNaibolshee 4islo: %d", c);
				} 
		}
	}
	
	return 0;
}
