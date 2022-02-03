/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
 int num,idx,fact=1;
 printf("Enter a number:");
 scanf("%d",&num);
 for(idx=num;idx>0;idx--) {
 fact=fact*idx;
 }
 printf("Factorial of %d is %d\n",num,fact);
 return 0;
}