#include<stdio.h>
void main()
{
    int n,a[100][100],i,j,s1,s2,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                s1=s1+a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=n-i-1;j>=0;j--)
        {
            s2=s2+a[i][j];
            break;
        }
    }
    printf("%d",s1*s2);
}
