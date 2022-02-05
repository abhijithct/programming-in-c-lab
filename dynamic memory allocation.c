/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() {
    int i, count, *arr, sum = 0;


    printf("Enter the total number of elements : ");
    scanf("%d", &count);
    arr = (int *)malloc(count * sizeof(int));
    printf("Enter the elements : ");
    for (i = 0; i < count; i++) {
        scanf("%d", arr + i);
        sum += *(arr + i);
    }
    printf("sum is %d \n", sum);
    free(arr);
    return 0;
}

