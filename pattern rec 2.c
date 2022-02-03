/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int rowIndex, colIndex, limit;
 printf("Enter the limit : ");
 scanf("%d", &limit);
 for (rowIndex = 0; rowIndex < limit; rowIndex++){
 for (colIndex = 0; colIndex <= rowIndex; colIndex++) {
 printf(" * ");
 }
 printf("\n");
 }
}
