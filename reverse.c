#include<stdio.h>
int reversenum(int num);
int reversenum(int num)
{
    int rn=0;
    while(num>0)
    {
        rn=rn*10+num%10;
        num = num/10;   
    }
    return rn;
}
int main()
{
    int NUM;
    printf("enter num");
    scanf("%d",& NUM);
    printf("reverse num is %d",reversenum(NUM));
    return 0;
   
}