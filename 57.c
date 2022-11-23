#include <stdio.h>
void main()
{
    int c;
    printf("Enter \n1. Total Amount\n2. Balance to be paid\n3. Balance to be recieved\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("Total Amount = 6000");
        break;
        case 2:
        printf("Balance to be paid = 1000");
        break;
        case 3:
        printf("Balance to be received = 4000");
    }
