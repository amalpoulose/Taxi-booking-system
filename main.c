#include"taxi.h"
int customer_id=1,booking_id=1;
char str[NUM][6];


int main(void)
{
	int n,i;
	char ch;
	TX **tx;
	tx=malloc(sizeof(TX*)*NUM);
	for(i=0;i<NUM;i++)
		tx[i]=malloc(sizeof(TX));
	init(&tx);   
	do
	{
		system("clear"); 
		printf("\t\t\t\t----*TAXI BOOKING SYSTEM*----\n\n1.Book taxi\n2.Taxi details\n3.Exit\n\nEnter the choice : ");
		scanf(" %c",&ch);
		switch(ch)
		{
			case '1' : book(&tx);
				   break;
			case '2' : printf("Enter the taxi number : ");
				   scanf("%d",&n);
				   display(tx,n);
				   break;
			case '3' : return;
				   break;
			default:system("clear");
                                printf("\nInvalid choice\n");
                                sleep(2);
		}
	}while(1);
	return 0;
}



