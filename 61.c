#include <stdio.h>
void main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    if(n%2==1)
    {
        n++;
    }
    printf("Number of pages needed = %d\n",n/2);
}
