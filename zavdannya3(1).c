#include <stdio.h>


int main(){

	int s, f;

	printf("Vvedite s:");
	scanf ("%d", &s);
	
	if ((s >= -3) && (s <= 5)){
		f = s * s;
			printf ("f(s)= %d", f);
	}else{
			f = 6 * s;
			printf ("f(s)= %d", f);
	}
	return 0;
}

