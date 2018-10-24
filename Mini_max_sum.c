#include<stdio.h>

int main()
{
    int i;
    long int minsum=0,maxsum=0;
    long int arr[100],temp=0;
    
    for(i=0;i<5;i++)
    {
        scanf("%ld",&arr[i]);
    }
    int mid=2;
    
   for(i=0;i<5;i++)
   {
       for(int j=i+1;j<5;j++)
       {
           if(arr[i]>arr[j])
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }
    for(i=0;i<4;i++)
    {
        minsum=minsum+arr[i];
    }
    for(i=4;i>=1;i--)
    {
        maxsum=maxsum+arr[i];
    }
    
    printf("%ld %ld",minsum,maxsum);
    return 0;
    
}
