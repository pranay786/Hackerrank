#include<stdio.h>

int main()
{
    unsigned int hour,minute,second;
    char noon[3],*p;
    
    p=&noon;
    scanf("%02d:%02d:%02d%s",&hour,&minute,&second,noon);
    
    if(hour==12 && *p=='A')
    {
        hour=00;
    }
    else if(*p=='P' && hour!=12)   
    {
    hour=hour+12;
    }

    printf("%02d:%02d:%02d",hour,minute,second);
    
    return 0;
}