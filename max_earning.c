#include "taxi.h"

extern int customer_id,booking_id;
extern char str[NUM][6];

int max_earning(TX **tx)
{
int i,max=0;
for(i=0;i<NUM;i++)
 if(tx[i]->erng > max)
    max=tx[i]->erng;
return max;
}
