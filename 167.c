#include<stdio.h>
void main()
{
    char a[1000];
    int n=0,i,k=0,j;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
       if(a[i]!=' ')
       {
           n++;
       }
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%1==0)
        {
            k=1;
        }
    }
    if(k==0)
    printf("yes");
    else
    printf("no");
}
