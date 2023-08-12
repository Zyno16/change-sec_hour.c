#include <stdio.h>
#include <stdlib.h>

int main()
{
   int t, sec,min, hour,r;
   printf("How many minute want to change it to hour and minute");
   scanf("%d",&t);
   hour= t/3600;
   r=t%3600;
   min=r/60;
   sec=r%60;
   printf("%d:%d:%d",hour,min,sec);


    return 0;
}
