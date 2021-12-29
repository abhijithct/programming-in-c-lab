/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//to check wheather given number is perfect or not
#include<stdio.h>  
#include<conio.h>  
void main()  
{  
    int n,sum = 0, r;  
    printf("Enter a number\n");  
    scanf("%d", &n);      
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("reverse of %d is %d\n",n,sum);
    getch();
}
