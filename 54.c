#include<stdio.h>
void swap();
 int *pa;//pointer variables 
 int *pb;
void main()
{
   
    int a,b;//two numbers  
    printf("Enter 2 numbers \n");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("after swap a=%d and b= %d",*pa,*pb);
}
void swap(int c,int d)// to swap
{
   
    pa=&c;
    pb=&d;
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
    
}
