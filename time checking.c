/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int num,hours,minutes,seconds;
    scanf("%d%d%d",&hours,&minutes,&seconds);
    if(hours<=24 && minutes <=60 && seconds <=60 )
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}