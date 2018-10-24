#include<stdio.h>

# define MAX 3

int main()
{
    int alice[MAX],bob[MAX],i,al=0,bl=0;
    
    for(i=0;i<MAX;i++)
    {
        scanf("%d",&alice[i]);
    }
    
    for(i=0;i<MAX;i++)
    {
        scanf("%d",&bob[i]);
    }
    
    for(i=0;i<MAX;i++)
    {
        if(alice[i]>bob[i])
        {
            al++;
        }
        
        else if(bob[i]>alice[i])
        {
            bl++;
        }
    }
    
    printf("%d %d",al,bl);
    return 0;
}