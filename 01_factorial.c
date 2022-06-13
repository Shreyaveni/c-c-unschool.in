#include<stdio.h>
int factorial(int x);
int main()
{
    int a,fact;
    printf("Enter the number you want factorial of\n");
    scanf("%d", &a);
    factorial(a);
    printf("The factorial of %d is %d\n",a,fact);
    return 0;
}

int factorial(int x)
{
    if (x==0 || x==1)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
    