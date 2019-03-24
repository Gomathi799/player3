#include<stdio.h>
void main()
{
    char a[1000];
    int n,k=0,i,j;
    scanf("%s",a);
    scanf("%d",&k);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;i<n;i++)
    {
        if((i+1)%k==0)
        {
            printf("%c ",a[i]);
        }
    }
}
