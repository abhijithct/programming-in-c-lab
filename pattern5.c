/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//pattern5
#include <stdio.h>
void main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=i;j<=5;j++)
    {
      printf("%d\t",j);
    }
    printf("\n");
  }

    return 0;
}
