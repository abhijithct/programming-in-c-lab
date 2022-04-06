/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int arr[2][2]={1,2,3,4};
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j,2;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
