/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,sum=0,r,temp,c;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
    }
    if(sum==temp)
        printf("%d is an armstrong number",temp);
    else
        printf("%d is not an armstrong number",temp);
    return 0;
}
