#include<stdio.h>
#include<math.h>
int main()
{
    int ar[100],n,i,res;
    double j;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    
    for(i=0;i<n;i++)
    {
        j=ar[i]/5.0;
        res=ceil(j)*5;
        if((res-ar[i])<3 && ar[i]>=38)
        {
            ar[i]=res;
        }
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}