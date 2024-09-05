#include<stdio.h>
int main()
{
    int a;
    printf("Enter a");
    printf("\n");
    scanf("%d",&a);
    if (a%4==0){
        printf("a is leap year"); 
    }
    else
    {
        printf("a is not leap year ");
    }
    return 0;
}