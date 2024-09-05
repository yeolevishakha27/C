/* #include<stdio.h>
int main() {
    float salary;
    float dearnessallow;
    float rent;

    printf("Enter salary \n");
    scanf("%f", &salary);

    dearnessallow = (40.0 / 100.0) * salary;

    printf("dearnessallow is %f\n", dearnessallow);

    rent = (20.0 / 100.0) * salary;

    // Print the calculated rent
    printf("rent is %f\n", rent);

    // Calculate the total salary after subtracting dearness allowance and rent
    float TotalSalary = salary - dearnessallow - rent;

    // Print the total salary
    printf("TotalSalary is %f\n", TotalSalary);

    return 0;
}
*/

// #include<stdio.h>
// int main(){
//     int km;
//     int meter;

//     printf("enter the distance in km ");
//     scanf("%d",&km);
//     meter =km*1000 ;
//     printf("in meter is %d",meter);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int width = 1189,height = 841, temp;

    for(int i= 0; i<=8; i++){
        printf("A%d: %d x %d\n",i,width,height);
        temp = width;
        width = height;
        height = temp/2;
    }
    return 0;
}

 