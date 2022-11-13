#include<stdio.h>
void main()
{
    float b,h;
    printf("enter the base and height of triangle \n");
    scanf("%f%f",&b,&h);
    printf("are of triangle is %f \n",area(b,h));
}


float area(float c,float d)
{
    float a;
    a=0.5*d*c;
    return a;

}