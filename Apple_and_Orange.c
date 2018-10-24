#include<stdio.h>

int main()
{
   long long int s,t,a,b,m,n,ap[100000],or[100000],count=0,count1=0;
   long long int i;
    scanf("%lld %lld\n",&s,&t);
    scanf("%lld %lld\n",&a,&b);
    scanf("%lld %lld\n",&m,&n);
    
    for(i=0;i<m;i++)
    {
        scanf("%lld",&ap[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%lld",&or[i]);
    }
    
    for(i=0;i<m;i++)
    {
        ap[i]=ap[i]+a;
        if(ap[i]>=s && ap[i]<=t)
        {
            count++;
        }
    }
    
    for(i=0;i<n;i++)
    {
        or[i]=or[i]+b;
        if(or[i]>=s && or[i]<=t)
        {
            count1++;
        }
    }
    
    printf("%lld\n%lld",count,count1);
    return 0;
        
}
