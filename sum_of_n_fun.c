#include <stdio.h>
int sum(int);
int main()
{
    int k;
    k = sum(12);
    printf("sum is %d",k);
    
}
int sum(int N)
{
    int s=0;
    for(int i = 1;i<=N; i++)
    {
        s=s+i;
    }
    return (s);
}