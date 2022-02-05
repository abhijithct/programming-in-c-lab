/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
struct emp {
    char name[30];
    int id, age;
    double salary;
}emp[10];


void getEmployeeInfo() {
    register int idx;
    int employeeCount, count = 0;
    printf("Enter the number of employees :");
    scanf("%d", &employeeCount);
    for(idx = 0; idx < employeeCount; idx++) {
        count++;
        printf("Enter the Name, id, age and salary of Employee %d: \n", count);
        getchar();
        fgets(emp[idx].name, 30, stdin);
        scanf("%d%d%lf", &emp[idx].id, &emp[idx].age, &emp[idx].salary);
    }
    for(idx = 0; idx < employeeCount; idx++) {
        printf("\nName : %s", emp[idx].name);
        printf("ID : %d\n", emp[idx].id);
        printf("Age : %d\n", emp[idx].age);
        printf("Salary : %lf\n", emp[idx].salary);
    }
}
int main() {
    getEmployeeInfo();
    return 0;
}




