#include<stdio.h>
void main()
{
    int n,a[1000],l=0,i,j,t;
    scanf("%d",&n);
    while(n)
    {
        a[l]=n%10;
        l++;
        n=n/10;
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<l;i++)
    printf("%d",a[i]);
}
