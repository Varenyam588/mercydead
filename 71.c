#include <stdio.h>
void main()
{
    char b[500];
    char c[500];
    printf("Enter Qoutes");
    gets(b);
    printf("Desired Word");
    gets(c);
    char *p;
    p=strstr(b,c);
    if(p)
    {
        printf("Exists");
    }
    else
    {
        printf("Doesnt Exist");
    }
}
