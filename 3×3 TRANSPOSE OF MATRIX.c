#include<stdio.h>

int main()
{
    int a[3][3],i,j;
    
    printf("Enter elements of 3×3 matrics: \n");
    
    for(i=0;i<3;i++)
    { 
       for(j=0;j<3;j++)
       {
         scanf("%d",&a[i][j]);
       }
    }
    
    printf("\n Original Matrix \n");
    for(i=0;i<3;i++)
    { 
       for(j=0;j<3;j++)
       {
         printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    
    printf("\n Transpose Matrix \n");
    for(i=0;i<3;i++)
    { 
       for(j=0;j<3;j++)
       {
         printf("%d ",a[j][i]);
       }
       printf("\n");
    }
    
    
    return 0;
}