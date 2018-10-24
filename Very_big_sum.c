#include<stdio.h>

int main()
{
   unsigned long long int sum=0,a[10];
    int n,i;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum=sum+a[i];
    }
    
    printf("%lld",sum);
    
    return 0;
}