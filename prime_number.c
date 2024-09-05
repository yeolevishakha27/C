#include<stdio.h>
int main()
{
    int a,b,i,j;

    printf("Enter the starting element of range");
    scanf("%d",& a);
    printf("Enter the ending element of range");
    scanf("%d",& b);

    for(i=a+1;i<=b-1;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            printf("%d \n",i);
        }
    }
     return 0;
}
