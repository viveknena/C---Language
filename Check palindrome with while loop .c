#include<stdio.h>

int main()
{
     int num,rev=0,digit,og;
     printf("Enter a no.");
     scanf("%d",&num);
     
     og=num;
     while(num!=0)
     {
       digit=num%10;
       rev=rev*10+digit;
       num=num/10;
     }
     
     if(og=rev)
     printf("%d is Palindrome no.",og);
     else
     printf("%d is not a palindrome no.",og);
    return 0;
}