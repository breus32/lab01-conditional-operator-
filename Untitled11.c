#include <stdio.h>

int main()
{
    float x, y;
    int n;
 
    printf ("Vvedite x= ");
    scanf ("%lf", &x);
 
    printf ("Vvedite n= ");
    scanf ("%lf", &n);
 
    y = x * x + 3 * n;
    printf("\ny=%lf", x,y);
    
return 0;
}
