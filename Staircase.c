#include<stdio.h>

int main()
{
    int n,i,j,k;

    scanf("%d",&n);
    int count=n-1;     
    for(i=0;i<n;i++)
    {
        for(j=1;j<=count;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
        printf("#");
        }
        printf("\n");
        count--;
    }
}