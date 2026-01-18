#include<stdio.h>

int main()
{
    int sum,digit,start,end,num,temp;
    printf("Enter Start Number:");
    scanf("%d",&start);
    printf("Enter End Number:");
    scanf("%d",&end);
    
    for(num=start ; num<=end ; num++)
    {
      temp=num;
      sum=0;
      
      
       while(temp != 0)
       {
         digit=temp%10;
         sum=sum+(digit*digit*digit);
         temp=temp/10;
       }
       
       if(sum == num)
       {
         printf("%d\n",num);
       }
    }
    return 0;
}