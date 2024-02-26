/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include<stdlib.h>

int main(num)
{
    printf("enter the number:\n");
    scanf("%d",& num);
    if(num%3==0)
    {
        printf("Hello");
    }
    else if (num%5 == 0)
    {
        printf("World");
    }
    else
    {
        printf("Hello World");
    }

    return 0;
}