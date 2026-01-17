#include<stdio.h>

int main()
{
    int i,x=0,n;
    
    printf("Enter any no.:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
          x++;
        }
    }
    
    if(x==2)
    {
       printf("%d is a Prime number",n);
    } 
    else
    {
       printf("%d is not a Prime number",n);
    }
    return 0;
}