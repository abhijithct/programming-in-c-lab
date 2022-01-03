/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//wap to read an array of 5 elements from the user and displa its elements
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i;
    clrscr();
    printf("enter the array elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array elements are: ");
    for(i=0;i<5;i++);
    {
        printf("%d\t",a[i]);
    }
    getch();
}
