#include<stdio.h>
void main()
{
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    while(a%b!=0)
    {
        a++;
        count++;
    }
    printf("%d",count);
}
