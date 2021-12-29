/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//to check prime or not
#include <stdio.h>

int main()
{
    int num;
    clrscr();
    printf("enter a number");
    scanf("%d",&num);
    if(num%2!=0)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }

    return 0;
}
