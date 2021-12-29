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
    int num, rem, sum = 0, i;  
    printf("Enter a number\n");  
    scanf("%d", &num);      
    for(i = 1; i < num; i++)  
    {  
        rem = num % i;  
        if (rem == 0)  
            {  
                 sum = sum + i;  
             }  
    }  
    if (sum == num)  
    printf(" %d is a Perfect Number");  
    else  
    printf("\n %d is not a Perfect Number");  
    getch();  
}  
