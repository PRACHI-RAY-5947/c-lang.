#include <stdio.h>
struct student
{
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[20];
    char stu_city[20];
    int stu_standard;
    char stu_school[20];
};

int main()
{

    int n;
    printf("Enter the number of students : ");
    scanf("%d", &n);
    int i;
    struct student s[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter your ID :");
        scanf("%d", &s[i].stu_id);
        printf("\nEnter your Name:");
        scanf(" %[^\n]", &s[i].stu_name);
        printf("\nEnter your Age:");
        scanf("%d", &s[i].stu_age);
        printf("\nEnter your Course:");
        scanf(" %[^\n]", &s[i].stu_course);
        printf("\nEnter your City:");
        scanf(" %[^\n]", &s[i].stu_city);
        printf("\nEnter your Standard:");
        scanf("%d", &s[i].stu_standard);
        printf("\nEnter your School:");
        scanf(" %[^\n]", &s[i].stu_school);
    }

    printf("\n --- student Record ---\n");

    for (i = 0; i < n; i++)
    {
        printf(" ID :%d\n", s[i].stu_id);
        printf(" NAME :%s\n", s[i].stu_name);
        printf(" AGE :%d\n", s[i].stu_age);
        printf(" COURSE:%s\n", s[i].stu_course);
        printf(" CITY :%s\n", s[i].stu_city);
        printf(" STANDARD : %d\n", s[i].stu_standard);
        printf(" SCHOOL :%s\n", s[i].stu_school);
    }
}
