#include<stdio.h>
#include<string.h>
void main()
{
    char a[20], b[20];
    scanf("%s",a);
    scanf("%s",b);
    int l1=strlen(a);
    int l2=strlen(a);
    for(int i=0;i<l1;i++)
    {
        for(int j=0;j<l2;j++)
        {
            if(a[i]==b[j])
            {
                b[j]='@';
            }
        }
    }
    for(int i=0;i<l2;i++)
    {
        if(b[i]!='@')
        {
            printf("%c",b[i]);
        }
    }
}
