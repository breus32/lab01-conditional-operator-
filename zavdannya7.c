#include <stdio.h>

void leapyear (int b, int c, int d){
	
	if ((c == 0)&&(d != 0)) {
		printf("\n0");
	} else {
		if (b == 0) {
			printf("\n1");
		} else {
			printf("\n0");
		}
	}
}


int main ()
{
	int a, b, c, d;
	
	printf("Vvedite god: ");
	scanf("%d", &a);
	
	b = a%4;
	c = a%100;
	d = a%400;
	
	leapyear(b, c, d);
		
	return 0;
}
