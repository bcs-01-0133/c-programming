
#include <stdio.h>

struct employee {

    int employee_id;
    char employee1_name[20];
    char department[20];
    int basic_salary;
    int allowance;

};

int main() {

    struct employee employee1;
    int gross_salary;

    // User input
    printf("enter employee id: ");
    scanf("%d", &employee1.employee_id);

    printf("enter employee Name: ");
    scanf("%s", employee1.employee1_name);

    printf("enter department: ");
    scanf("%s", employee1.department);

    printf("enter basic Salary: ");
    scanf("%d", &employee1.basic_salary);

    printf("enter allowance: ");
    scanf("%d", &employee1.allowance);

    // Calculate gross salary
    gross_salary = employee1.basic_salary + employee1.allowance;

    
    printf("employee ID   : %d\n", employee1.employee_id);
    printf("employee Name : %s\n", employee1.employee1_name);
    printf("department    : %s\n", employee1.department);
    printf("basic Salary  : %d\n", employee1.basic_salary);
    printf("allowance     : %d\n", employee1.allowance);
    printf("gross Salary  : %d\n", gross_salary);

    return 0;
}


