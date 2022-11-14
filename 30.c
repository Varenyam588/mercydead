#include<stdio.h>

void main() 
{
    int x;
    scanf("%d",&x);
    if(x<=9)
   {
        printf("Insufficient Earning");
    }
   else if((x>=10)&&(x<=99))
   {
      printf("Very Low Earning");
   }
   else if((x>=100)&&(x<=999))
   {
      printf("Low Earning");
   }
   else (printf("High Earning"));
    return 0;
}
