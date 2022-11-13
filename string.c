#include<stdio.h>
void main()
{
    char string[50];
    int a=0,i;
    printf("enter the string \n");
    scanf("%s",string);
    for(i=0;i<50;i++)
    {
        if(string[i]=='g')
        {
            a+=1;
        }
    }
    printf("the number of times g appears in string is %d",a);
}
