#include <stdio.h> 

float max (float a, float b) 
{ 
	int x; 
	if (a > b) { 
	x = a; 
} 	
	else {
	x = b; 
}

	return x; 
} 

	int main () 
{ 
	int a, b, y; 
	a = 5;
	b = 10;
	y = max(a, b); 
	printf("%d", y); 

return 0; 
}
