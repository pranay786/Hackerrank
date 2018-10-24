#include<stdio.h>
#define MAX 1000
int main()
{
    int n,a[MAX],sum=0,i;
    
    scanf("%d\n",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    
    printf("%d",sum);
    return 0;
    
}