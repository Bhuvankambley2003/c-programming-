#include<stdio.h>
int main()
{
    struct emp
    {
        int id;
        char name[50];
        int salary;
        int age;

    }emp[50];
    int i,n;
    printf("enter the number of employee details to be entered \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the details of employee \n");
        printf("Enter the ID\n");
        scanf("%d",&emp[i].id);
        printf("Enter the name \n");
        scanf("%s",emp[i].name);
        printf("Enter the salary\n");
        scanf("%d",&emp[i].salary);
        printf("Enter the age\n");
        scanf("%d",&emp[i].age);
    }


    printf("the employee details entered are \n");
    for(i=0;i<n;i++)
    {
        printf("employee id of employee %d is %d \n",i,emp[i].id);
        printf("employee name of employee %d is %s \n",i,emp[i].name);
        printf("employee  salary of employee %d is %d \n",i,emp[i].salary);
        printf("employee age of employee  %d is %d \n",i,emp[i].age);

    }
    

    return 0;
}

 