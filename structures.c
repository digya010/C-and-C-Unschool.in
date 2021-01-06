#include<stdio.h>

struct employee
{
    char name[20];
    char id[10];
    float experience[10];
    float salary[1];
};
int main()
{
    int i=0;
    struct employee E[5];
    for(i=0 ; i<5 ; i++)
    {
        printf("enter the details of employee %d",i+1);
        printf("\nenter name: ");
        scanf("%s",&E[i].name);
        printf("\nenter employee id: ");
        scanf("%s",&E[i].id);
        printf("\nenter experience: ");
        scanf("%s",&E[i].experience);
        printf("\nenter salary: ");
        scanf("%s",&E[i].salary);
    }
    for(i=0 ; i<5 ; i++)
    {
       printf("\nname: %s",E[i].name);
       printf("\nemployeeid: %s",E[i].id);
       printf("\nexperience: %s",E[i].experience);
       printf("\nsalary: %s",E[i].salary);

    }
    return 0;
}

