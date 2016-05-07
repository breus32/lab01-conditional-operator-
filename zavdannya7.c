#include <stdio.h>

void leapyear (int b, int c, int d, int a){
	
	b = a%4;
	c = a%100;
	d = a%400;
	
	if ((c == 0)&&(d != 0)) {
		return 0;
	} else {
		if (b == 0) {
			printf ("\n1");
			return 1;
		} else {
			return 0;
		}
	}
}

int main ()
{
	int a, b, c, d;
	
	printf("Vvedite god: ");
	scanf("%d", &a);

	
	leapyear(b, c, d, a);	
	return 0;
}
