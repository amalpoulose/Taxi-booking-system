#include "taxi.h"
extern int customer_id,booking_id;
extern char str[NUM][6];
void book(TX ***tx)
{       
	int i,pt,dist=5,select,tmp,amount,time,min_earn;
	char pp,dp;
	FILE *fp;
        ABC:
	system("clear"); 
	printf("Enter pickup point (A/B/C/D/E/F) : ");
	scanf(" %c",&pp); 
	printf("Enter drop point   (A/B/C/D/E/F) : ");
	scanf(" %c",&dp); 
        if(!((pp>64&&pp<71)&&(dp>64&&dp<71)))
        {
	   system("clear"); 
           printf("\n\n\tSorry, Taxi service not available to these Location\n\n\t\tPlease Try Again\n\n");
           sleep(2);
           goto ABC;
        } 
	printf("Enter pickup time  ( 0-24hr )    : ");
	scanf(" %d",&pt); 
        if(!(pt>=0&&pt<=24))
        {
	 system("clear"); 
         printf("\n\n Enter valid pickup time\n\n");
         sleep(2);
         goto ABC;
        }
	select=-1;
	for(i=0;i<NUM;i++)
	{       min_earn=max_earning(*tx);
		tmp=pp-((tx[0][i])->dropoff);
		if(tmp<0)tmp=-tmp;
		if((tx[0][i]->dropoff==pp && tx[0][i]-> erng<min_earn) ||(tmp<dist && ((tx[0][i])->drop_t <= pt)))
		{       
			if(tx[0][i]->erng < min_earn)
				min_earn=tx[0][i]->erng;
			if(tmp<dist)
				dist = tmp;  
			select=i;
		}
	} 
	if(select==-1)
	{
		printf("\n\n\n No Taxi available Booking rejected\n\n");
		sleep(2);
		return;
	} 
	tmp=dp-pp;
	if(tmp<0)tmp=-tmp;
	amount=(tmp*DIST-5)*10+RS;
	time= tmp*TIME;

	printf("\n\n\n Taxi %d is alloted\n\n ",select+1);
	tx[0][select]->cus_id  =customer_id;
	tx[0][select]->bk_id   =booking_id;
	tx[0][select]->fare    =amount;
	tx[0][select]->pick_t  =pt;
	tx[0][select]->drop_t  =pt+time;
	tx[0][select]->erng   +=amount;
	tx[0][select]->pickup  =pp;
	tx[0][select]->dropoff =dp;

	fp=fopen(str[select],"a+");
	fprintf(fp,"%2d %2d %2c %2c %2d %2d %4d\n",customer_id, booking_id, pp, dp, pt, pt+time,amount);
	fclose(fp);       

	customer_id++;booking_id++; 
	sleep(2);
}

