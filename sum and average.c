/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,sum;
    float avg;
    printf("enter the numbers:\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    avg=sum/2;
    printf("the sum of the numbers= %d\n",sum);
    printf("the average of numbers=%.f\n",avg);
    
    return 0;
}