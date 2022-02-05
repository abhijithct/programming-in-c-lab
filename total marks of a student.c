/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
struct student {
    int rollno,tot;
    char name[25];
    int mark[5];
}student[10];
void main() {
    int i,n,j;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter Student Roll Number: ");
        scanf("%d",&student[i].rollno);
        printf("Enter Student name: ");
        scanf("%s",student[i].name);
        printf("Enter Student 3 subject's marks: ");
        for(j=0;j<3;j++) {
            scanf("%d",&student[i].mark[j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++) {
        student[i].tot=0;
        for(j=0;j<3;j++)
        student[i].tot = student[i].tot+ student[i].mark[j];
    }
    for(i=0;i<n;i++) {
        printf("Student's Roll no. %d", student[i].rollno);
        printf("\nStudent's Name %s", student[i].name);
        printf("\nStudent's Total Marks %d\n", student[i].tot);
    }printf("\n");
}
