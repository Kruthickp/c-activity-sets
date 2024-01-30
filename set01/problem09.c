#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
float input()
{
    float n;
    printf("Enter a number a positive number\n");
    scanf("%f", &n);
    return n;
}
float square_root(float n)
{
    float x= n/2;
    float conv=1;
    while(conv>0.0001)
    {
        x=(x+n/x)/2;
        conv=x*x-n; 
    }
    return x;
} 
void output(float n, float sqrroot)
{
    printf("The square root of %f is %f\n", n,sqrroot);
}
int main()
{
    float n=input();
    float sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}