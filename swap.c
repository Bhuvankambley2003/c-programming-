#include <stdio.h>
void swap(int *x,int *y) 
{
   int c;
   c=*x; 
   *x=*y;    
   *y=c; 
   return;
}

int main ()
{
   int a=5;
   int b=6;
   printf("Before swap, value of a : %d\n",a);
   printf("Before swap, value of b : %d\n",b);
   swap(&a,&b);
   printf("After swap, value of a : %d\n",a);
   printf("After swap, value of b : %d\n",b);
   return 0;
}
