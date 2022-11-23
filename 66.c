#include <stdio.h>
int main(){
    int fair,balance=5000,number_of_people,total_amount;
    printf("Enter no. of people : ");
    scanf("%d",&number_of_people);
    printf("fair : ");
    scanf("%d",&fair);
    total=number_of_people*fair;
    if (total>balence){
        total=total-balance;
        printf("shajith has to pay Rs.%d",total);
    }
    else {
        total = balance - total;
        printf("shajith has %d",total);
    }
}
    return 0;
}
