#include<stdio.h>

int main()
{
    int x1,x2,v1,v2,i,j,count=0;
    
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    
    while(x1!=x2)
    {
        x1=x1+v1;
        x2=x2+v2;
        count++;
        if(count>100000)
        {
            goto jump;
        }
    }
    jump:
    if(x1==x2)
    {
        printf("YES");
    }
   else
    {
        printf("NO");
    }
    return 0;
}
