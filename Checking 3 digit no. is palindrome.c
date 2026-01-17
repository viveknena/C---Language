#include<stdio.h>

int main()
{
     int n,r=0,r1,c;
     printf("Enter a 3 digit no.");
     scanf("%d",&n);
     
     c=n;
     
     r1=n%10;
     r=r*10+r1;
     n=n/10;
     
     r1=n%10;
     r=r*10+r1;
     n=n/10;
     
     r1=n%10;
     r=r*10+r1;
     
     if(c==r)
     {
       printf("%d is Palindrome",c);
     }
     else
     {
       printf("No");
     }
     


    return 0;
}