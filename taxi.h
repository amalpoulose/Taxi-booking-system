#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define DIST 15
#define RS 100
#define NUM 4
#define TIME 1

typedef struct taxi
{
	int cus_id,bk_id,fare,pick_t,drop_t,erng;
	char pickup,dropoff;
}TX;


void init(TX ***);
void book(TX ***);
void display(TX **,int);
int max_earning(TX **);


