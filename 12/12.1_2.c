include <stdio.h>

struct employee
{
    int emp_id;
    char emp_name[20];
    int emp_age;
    char emp_role[20];
    char emp_city[20];
    int emp_experience;
    char emp_company_name[20];
};

int main()
{

    int n;
    printf("Enter the number of employee :");
    scanf("%d", &n);
    int i;
    struct employee e[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter your ID :");
        scanf("%d", &e[i].emp_id);
        printf("\nEnter your Name :");
        scanf(" %[^\n]", &e[i].emp_name);
        printf("\nEnter your Age :");
        scanf("%d", &e[i].emp_age);
        printf("\nEnter your role :");
        scanf(" %[^\n]", &e[i].emp_role);
        printf("\nEnter your City :");
        scanf(" %[^\n]", &e[i].emp_city);
        printf("\nEnter your experience :");
        scanf(" %d", &e[i].emp_experience);
        printf("\nEnter your company name :");
        scanf(" %[^\n]", &e[i].emp_company_name);
    }

    printf("\n\n --- Employee Record ---\n\n");

    for (i = 0; i < n; i++)
    {
        printf(" ID :%d\n", e[i].emp_id);
        printf(" NAME :%s\n", e[i].emp_name);
        printf(" AGE :%d\n", e[i].emp_age);
        printf(" ROLE :%s\n", e[i].emp_role);
        printf(" CITY :%s\n", e[i].emp_city);
        printf(" EXPERIENCE :%d\n", e[i].emp_experience);
        printf(" COMPANY NAME :%s\n", e[i].emp_company_name);
    }
}
