#include<stdio.h>
typedef struct complexNumber{
    int i;
    int r;
}complex;

complex add(complex c1,complex c2) // fun declare
{                                   // fun define
    complex result;    
    result.r= c1.r +c2.r;
    result.i= c1.i +c2.i;
    return(result);
}
int main()
{
    complex a,b,sum;
    printf("Enter the real part of c1 \n");
    scanf("%d",&a.r);
    printf("Enter the img part of c1 \n");
    scanf("%d",&a.i);
    printf("Enter the real part of c2 \n");
    scanf("%d",&b.r);
    printf("Enter the real part of c2 \n");
    scanf("%d",&b.i);
    
    printf("\n a=%d + %di", a.r, a.i);
    printf("\n b=%d + %di", b.r, b.i);

    sum = add(a,b);
    printf("\n sum is %d +%di",sum.r,sum.i);
    

    return 0;
}