/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main(){
 int num,i,count,n;
 printf("Enter max range: ");
 scanf("%d",&n);
 for(num = 1;num<=n;num++) {
 count = 0;
 for(i=2;i<=num/2;i++){
 if(num%i==0){
 count++;
 break;
 }
 }
 if(count==0 && num!= 1)
 printf("%d ",num);
 }
 printf("\n");
 return 0;
}