#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,d;
    printf("enter the value of a,b and c \n");
    scanf("%f%f%f",&a,&b,&c);
    if ((a==0) || (b==0) || (c==0))
    {
        printf("invalid output \n");
        exit(0);


    }
    d=(b*b)-(4*a*c);
    if (d==0)
    {
        printf("the roots are real and equal \n");
        x1=(-b)/(2*a);
        printf("the roots are %f \n",x1);
        exit(0);
    }
    if (d>0){
        printf("the roots are real and distinct \n");
        x1=(-b+sqrt(d))/(2*a);
        x1=(-b-sqrt(d))/(2*a);
        printf("the roots are %.3f and %.3f \n",x1,x2);
        exit(0);
    }
    if(d<0){
        printf("the roots are real and imaginary");
        x1=(-b)/(2*a);
        x2=(sqrt(fabs(d)))/(2*a);
        printf("the roots are %f+0.3%fi and %f-0.3%fi \n",x1,x2,x1,x2);
        exit(0);
        
        
    }

    return(0);
}















