#include <stdio.h>

int main() {
    int fair,balance=5000,number_of_people,total;
   printf("Enter no. of people : ");
   scanf("%d",&number_of_people);
   printf("Enter fair : ");
   scanf("%d",&fair);
   total=fair*number_of_people;
   if(total>balance){
       total=total-balance;
       printf("Shajith has to pay balance %d\n",total);
   }
   else{
       total=balance-total;
       printf("Shajith has a balance of rupees %d\n",total);
   }

    return 0;
}
