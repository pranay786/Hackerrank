#include<stdio.h>

#define MAX 100

int main()
{
    int a[MAX][MAX],n,i,d1=0,d2=0,sum=0,j;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
        {
            d1=d1+a[i][i];
            d2=d2+a[i][j];
        }
    sum=d1-d2;
    printf("%d",abs(sum));
    
}