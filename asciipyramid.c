#include<stdio.h>
void main()
{
    char a[10];int i;
    printf("enter the name \n");
    scanf("%s",a);
    for(i=0;i<10;i++){
        printf("%c",a[i]);
    }
}