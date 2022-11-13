#include <stdio.h>
#include <strings.h>
int stringlen(char a[])
{
 int i;
 for(i=0;; i++)
 {
    if(a[i]=='\0')
    return i;
 }
}
int stringcmp(char a[],char b[])
{
 int i,c,l1;
 l1=stringlen(b);
 for(i=0; i<=l1; i++)
 {
    c=a[i]-b[i];
    if(c==0)
    {
        c=a[i]-b[i];
    }
    else{break;}
    
}
 if(c==0)
 {
    printf("Strings are equal\n");
    return 0;
 }
 else if(c>0)
{
    printf("Stirngs are not equal\n");
    return 1;
}
 else if(c<0)
 {
     printf("Stirngs are not equal\n");
    return -1;
 }
 return 0;
}
void stringcat(char a[],char b[])
{
 int i,j;
 j=stringlen(a);
 for(i=0; b[i]!='\0'; i++,j++)
 {
     a[j]=b[i];
 }
}
int main()
{
 char s1[50]="\0", s2[50]="\0";
 printf("Enter the string 1\n");
 scanf("%s",s1);
 printf("%s\n",s1);
 printf("Enter the string 2\n");
 scanf("%s",s2);
 printf("%s\n",s2);
 printf("Length of string 1 is %d\n",stringlen(s1));
 stringcmp(s1,s2);
 stringcat(s1,s2);
 printf("Concatenated string is %s\n",s1);
 return 0;
}