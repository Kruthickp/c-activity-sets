//2. Write a C program to add two numbers.
#include <stdio.h>
int main()
{
    int a,b,sum=0;
    printf("enter the first number:\n ");
    scanf("%d",&a);
    printf("enter the second number:\n");
    scanf("%d",&b);
    sum=a+b;
    printf("the sum of %d and %d is %d\n",a,b,sum);
    return 0;
}
