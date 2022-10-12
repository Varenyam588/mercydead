#include<stdio.h>

int main()
{
    printf("RA2211042010061");

    char alphabet;
    printf("Enter an alphabet : ");
    putchar('\n');  // to move to next Line

    alphabet=getchar();

    printf("\n\nReverse case of %c is :  ",alphabet);

    if(islower(alphabet))
        putchar(toupper(alphabet));

    else 
        // must be an uppercase character
        printf("%c",tolower(alphabet)) ;

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
