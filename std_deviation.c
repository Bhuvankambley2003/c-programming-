#include<stdio.h>
#include<math.h>
float mean(float *a,int n)
{
 int i;
 float sum=0,m=0;
 printf("Enter the elements in the array\n");
 for(i=0;i<n;i++)
 {
 scanf("%f",&a[i]);
 sum=sum+a[i];
 }
 m=sum/n;
 printf("Sum is %.2f\n",sum);
 return m;
}
void standard_deviation(float *b,int n)
{
 float v=0,m=0;
 int i;
 m=mean(b,n);
 printf("Mean is %.2f\n",m);
 for(i=0;i<n;i++)
 {
    v=v+((b[i]-m)*(b[i]-m)); 
 }
 v=v/n;
 printf("Standard deviation is %.2f",sqrt(v));
}
int main()
{
 float x[50];
 int n;
 printf("Enter the number of elements in the array\n");
 scanf("%d",&n);
 standard_deviation(x,n);
}
