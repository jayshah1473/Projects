#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("-1");
    }
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==b[i])
            {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    if(b[n-1]==a[n-1])
    {
                int temp = a[n-1];
                a[n-1] = a[n-2];
                a[n-2] = temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
