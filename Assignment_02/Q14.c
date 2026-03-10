#include <stdio.h>
int main()
{
    int emp_id, deptNo;
    char dsgn_C;
    char department[20], designation[30];

    printf("Enter Employee Id: ");
    scanf("%d", &emp_id);

    printf("Enter Department No: ");
    scanf("%d", &deptNo);

    printf("Enter Designation Code: ");
    scanf(" %c", &dsgn_C);
    switch(deptNo)
    {
        case 10:
            sprintf(department, "Marketing");
            break;
        case 20:
            sprintf(department, "Management");
            break;
        case 30:
            sprintf(department, "Sales");
            break;
        case 40:
            sprintf(department, "Designing");
            break;
        default:
            sprintf(department, "Invalid Choice");
    }
    switch(dsgn_C)
    {
        case 'M':
            sprintf(designation, "Manager");
            break;
        case 'S':
            sprintf(designation, "Supervisor");
            break;
        case 'C':
            sprintf(designation, "Clerk");
            break;
        case 's':
            sprintf(designation, "Security Officer");
            break;
        default:
            sprintf(designation,"Invalid Choice");
    }

    printf("\nEmployee with employee id %d is working in \"%s\" department as \"%s\"\n",
           emp_id, department, designation);

    return 0;
}
