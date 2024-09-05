#include<stdio.h>
int main()
{
    int i,n;
    printf("enter n:");
    scanf("%d",& n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",fib(i));
    }
}
int fib(int n)
{
    if(n==1)
    {
        return(0);
    }
    if(n==2)
    {
        return(1);
    }
    return(fib(n-1)+fib(n-2));
}