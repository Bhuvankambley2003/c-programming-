#include<stdio.h>
int main()
{
 int units;
 char n[25];
 float amount;
 printf("Enter name\n");printf("Enter units\n");
 scanf("%s",n);scanf("%d",&units);
 
 
 if(units>=0 && units <= 200)
    {
        amount=100+(units*0.80);
    }
 else if(units>200 && units <= 300)
    {
        amount=100+160+(units-200)*0.9;
    }
 else if(units>300)
    {
        amount=100+160+90+(units-300)*1;
    }
 else
    {
        printf("Invalid Input\n");
        return 0;
    }
 if(amount<400)
    {
        printf("Total amount charged to %s is %.2f",n,amount);
    }
 else if(amount>=400)
    {
        amount=amount+(amount*15)/100;
        printf("Total amount charged to %s is %f",n,amount);
    }
 return 0;
 
}
