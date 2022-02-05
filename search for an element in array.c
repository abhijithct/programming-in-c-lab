/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main() {
   int a[100], n, element, pos=0,i;


   printf("Enter the length of the array : ");
   scanf("%d", &n);


   printf("Enter array elements: ");
   for(i=0; i<n; i++)scanf("%d", &a[i]);


   printf("Enter element to search: ");
   scanf("%d",&element);


   for(i=0; i<n; i++) {
        if(a[i]==element) {
            printf("%d found at position %d\n", element, i+1);
            return 0;
        }
   }
   printf("%d not found.\n", element);
   return 0;
}

