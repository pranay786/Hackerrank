#include<stdio.h>

int main()
{
    long int n,ar[1000000],i,count=0,max,j;
    
    scanf("%ld",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%ld",&ar[i]);
    }
    max=ar[0];
    for (i = 1; i<n; i++)
  {
    if (ar[i] >max)
    {
       max= ar[i];
    }
  }
    
    for(i=0;i<n;i++)
    {
        if(ar[i]==max)
        {
            count++;
        }
    }
    printf("%ld",count);
    return 0;
}