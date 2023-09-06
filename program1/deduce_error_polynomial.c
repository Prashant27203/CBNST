#include<stdio.h>
#include<math.h>
int main()
{
    float true_value,absolute_value,absolute_error,relative_error,percentage_error=0.0;
    printf("Enter the True value \n");
    scanf("%f",&true_value);
    printf("Enter the Absolute Value \n");
    scanf("%f",&absolute_value);
    absolute_error=fabs(true_value-absolute_value);
    relative_error=fabs(absolute_error/true_value);
    percentage_error=relative_error*100;
    printf("the absolute error is : %f\n",absolute_error);
    printf("the relative error is : %f\n",relative_error);
    printf("the percentage error is %f\n",percentage_error);
    return 0;
}