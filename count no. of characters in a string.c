/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main() {
    int cword=0, cchar=-1, i;
    char str[50];
       printf("Enter the string : ");
       fgets(str, 30, stdin);
    for(i=0; str[i]!='\0'; i++) {
        cchar++;
        if(str[i]==' ') {
            cword++;
        }
    }
     printf("\nThe Number of characters =  %d",cchar);
     printf("\nThe Number of words =  % d\n",cword+1);
     return 0;
}



