#include <stdio.h>
void sum(int *a,int *b)
{
    printf("Sum = %d",*a+*b);
}
void main()
{
    
    int a,b;
    printf("Enter A,B : ");
    scanf("%d %d",&a,&b);
    sum(&a,&b);
}
