#include <stdio.h>

int main()
{
    int s, f;
    
    printf("Vvedite s:");
    scanf ("%d", &s);
    
    if ((s > 0) && (s < 1)){
    	f = s;
    	printf ("f(s)= %d", f);
    } else {
    	if (s > 1){
    	    f = s * s * s;
    	    printf ("f(s)= %d", f);
    	} else {
    	    if (s <= 0) {
    	    printf ("f(s)= 0");
    	    }
    	}
    }
	return 0;
}

