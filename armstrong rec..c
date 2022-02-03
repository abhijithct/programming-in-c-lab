/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main() {
 int number, initialValue, digitCube = 0;
 printf("Enter the number : ");
 scanf("%d",&number);
 initialValue = number;
 while(number != 0) {
 digitCube += ((number % 10) * (number % 10) * (number % 10));
 number /= 10;
 }
 if(initialValue == digitCube) {
 printf("%d is amstrong\n",initialValue);
 }else {
 printf("%d is not amstrong\n",initialValue);
 }
}
