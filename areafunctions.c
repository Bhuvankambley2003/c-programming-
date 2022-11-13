#include<stdio.h>
int main()
{
    float b,h;
    printf("enter the base and height of triangle \n");
    scanf("%f%f",&b,&h);
    printf("are of triangle is %f \n",area(b,h));
    return 0;
}


float area(float b,float h)
{
    float a;
    a=0.5*b*h;
    return a;

}