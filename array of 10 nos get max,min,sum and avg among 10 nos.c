#include<stdio.h>

int main()
{
    int a[10],i;
    int min,sum=0,max;
    float avg;
    
    printf("Enter 10 numbers");
    for(i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
    }
    
    min=a[0];
    
    for(i=0;i<10;i++)
    {
       sum +=a [i];
       
       if (a[i]<min)
          min=a[i];
          
       if (a[i]>max)   
          max=a[i];
    }
    
    avg=sum/10.0;
    
    printf("\nMin No:%d",min);
    printf("\nSum of 10 given numbers:%d",sum);
    printf("\nAverage:%.4f",avg);
    printf("\nMax no:%d",max);
    
    return 0;
}