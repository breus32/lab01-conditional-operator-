#include <stdio.h>

int main() 
{
    int time;
    
    printf("Enter the time: ");
    scanf("%d", &time);
    	
	if ((time >= 5)&&(time <= 10)){
		printf("\nDobroe utro.");
	} else {
	    if ((time >= 12)&&(time <= 18)) {
		    printf("\nDobriy den.");
	    } else {
	        if ((time >= 19)&&(time <= 24)){
		        printf("\nDobriy ve4er.");
	        } else {
	            if ((time >= 0)&&(time < 5)) {
		            printf("\nSpokoinoy no4i.");
		        } else {
		            printf ("Error!");
			   }
		      }
		}
	}
	return 0;
}
