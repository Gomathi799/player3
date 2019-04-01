#include<stdio.h>
void main()
{
    int n,a[1000],b[1000],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==b[n-1-i])
        {
            s++;
        }
    }
    if(n==s)
    printf("yes");
    else
    printf("no");
}
