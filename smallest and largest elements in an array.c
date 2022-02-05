/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include<stdio.h>
 int main() {
    int a[50],i,n,large,small;
    printf("Enter the length of the array : ");
    scanf("%d",&n);
    printf("Enter the Array elements : ");
    
    for(i=0;i<n;++i) {
        scanf("%d",&a[i]);
    }
    large=small=a[0];
    for(i=1;i<n;++i) {
        if(a[i]>large)
            large=a[i];
        if(a[i]<small)
            small=a[i];
    }
    printf("The largest element is %d\n",large);
    printf("\nThe smallest element is %d\n",small);
    
    return 0;
}
