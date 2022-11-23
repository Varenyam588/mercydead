#include<stdio.h>
int main(){
    float units;
        printf("Enter units : ");
        scanf("%f",&units);
        if(units<50){
            /*if(units*0.5>300){
                printf("Cost is %f\n",(units*0.5)+(units*0.5)*10/100);
            }else{*/
                printf("Cost is %f\n",units*0.5);
            }
        else if(units>50 && units<150){
            /*if(units*0.75>300){
                printf("Cost is %f\n", (units*0.75)+(units*0.75)*10/100);
            }else{*/
                printf("Cost is %f\n",units*0.75);
            }
        else if(units>150&&units<250){
            /*if(units*1.2>300){
                printf("Cost is %f\n", (units*1.2)+(units*1.2)*10/100);
            }else{*/
                printf("Cost is %f\n", units*1.2);
            }
        {
            if(units>250)
                {if(units*1.5>300){
                printf("Cost is %f\n",((units * 1.5) + ((units  * 1.5)*0.1)));
            }else{
                printf("Cost is %f\n",units*1.5);
            }
        }
