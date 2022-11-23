#include <stdio.h>
void main()
{
    int a,b;
    printf("Entr a,b : ");
    scanf("%d %d",&a,&b);
    float c= a/b;
    printf("Addition = %d\nSubtration = %d\nMultiplication = %d\nDivision = %0.3f\n",a+b,a-b,a*b,c);
}
