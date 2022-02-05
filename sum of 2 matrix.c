/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>   
int main()  
{  
    int m, n, c, d, first[10][10], second[10][10], sum[10][10];  
    printf("Enter the number of rows and columns of matrix : ");  
    scanf("%d%d", & m, & n);  
    printf("Enter the elements of first matrix\n");  
    for (c = 0; c < m; c++)  
        for (d = 0; d < n; d++) scanf("%d", & first[c][d]);  
    printf("Enter the elements of second matrix\n");  
    for (c = 0; c < m; c++)  
        for (d = 0; d < n; d++) scanf("%d", & second[c][d]);  
    printf("Sum of entered matrices:-\n");  
    for (c = 0; c < m; c++)  
    {  
        for (d = 0; d < n; d++)  
        {  
            sum[c][d] = first[c][d] + second[c][d];  
            printf("%d\t", sum[c][d]);  
        }  
        printf("\n");  
    }  
    return 0;  
}


