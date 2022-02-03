/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
 int num1,num2;
 float result;
 char ch;
 printf("Enter first number: ");
 scanf("%d",&num1);
 printf("Enter second number: ");
 scanf("%d",&num2);
 printf("Choose operation to perform (+,-,*,/,%%): ");
 scanf(" %c",&ch);
 result=0;
 switch(ch) {
 case '+': result=num1+num2;break;
 case '-': result=num1-num2;break;
 case '*': result=num1*num2;break;
 case '/': result=(float)num1/(float)num2;break;
 case '%': result=num1%num2;break;
 default:printf("Invalid operation.\n");
 }
 printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
 return 0;
}
