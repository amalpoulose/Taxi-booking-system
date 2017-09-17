#include"taxi.h"

extern int customer_id,booking_id;
extern char str[NUM][6];

void init(TX ***tx)
{     
	char str1[5]="taxi",str2[2];
	str2[1]='\0';
	int i;
	for(i=0;i<NUM;i++)
	{       str2[0]=i+49;
		strcpy(str[i],str1);
		fopen(strcat(str[i],str2),"w"); 
		tx[0][i]->pickup='A';
		tx[0][i]->dropoff='A';
	}
}

