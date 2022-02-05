/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main() {
    int array[20], i, sum=0, size, *ptr;
        
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter array elements :");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    ptr = array;
    for(i=0;i<size;i++) {
        sum += *ptr;
        ptr++;
    }


    printf("\nThe sum is: %d\n",sum);
}



