/*program to demonstrate the working off simple calculator*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


main()
{
    float _a,b,c;
    char d;
    printf("enter the operator\n");
    scanf("%c",&d);
    
    printf("enter the value of a and b \n");
    scanf("%f%f",&_a,&b);
    
    
    switch(d)
    {
        case '+':
            printf("%f%c%f=%f",_a,d,b,a+b);
            exit(0);

        case '-':
            printf("%f%c%f=%f",_a,d,b,a-b);
            exit(0);
        case '*':
            printf("%f%c%f=%f",_a,d,b,a*b);
            exit(0);
        case '/':
    
            printf("%f%c%f=%f",_a,d,b,a/b);
            exit(0);
        default:
            printf("invalid operator\n");
    }
}    



