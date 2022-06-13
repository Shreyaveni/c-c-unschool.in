#include<stdio.h>
int fib(int x);
int main()
{
    int x;
    printf("Enter the number you want fibonachi of\n");
    scanf("%d", &x);
    printf("The fibonachi of %d is %d\n",x,fib(x));
    return 0;
}

int fib(int x)
{
    
    if (x==1 || x==2)
    {
        return 1;
    }
    else
    {
        return fib(x-1)+fib(x-2);
    }
}