#include "taxi.h"

extern int customer_id,booking_id;
extern char str[NUM][6];

void display(TX **tx,int n)
{
	FILE *fp;
	char *s1;
	s1=malloc(50);
	system("clear"); 
	fp=fopen(str[n-1],"r");
	printf("\n\nTaxi-%d   Total Earning = %d\n\n",n,tx[n-1]->erng);
	while(fgets(s1,50,fp))
		printf("%s",s1);
	printf("\n");
	sleep(2);
	fclose(fp);
        free(s1);
}


